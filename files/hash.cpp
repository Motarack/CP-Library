// Call pl_hash(n) at the beggining of the program
// Needs: mod, rng

const int HASH_MOD_0 = 1e9 + 7, HASH_MOD_1 = 1e9 + 9, HASH_BASE = get_rand(27, 40);
vector<Mod<HASH_MOD_0> > hash_base_0;
vector<Mod<HASH_MOD_1> > hash_base_1;

void pl_hash(int n){
	hash_base_0.resize(n + 1);
	hash_base_0[0] = 1;
	f(i, 1, n + 1)hash_base_0[i] = hash_base_0[i - 1] * HASH_BASE;
	hash_base_1.resize(n + 1);
	hash_base_1[0] = 1;
	f(i, 1, n + 1)hash_base_1[i] = hash_base_1[i - 1] * HASH_BASE;
}

struct Hash{
	int ln;
	Mod<HASH_MOD_0> h0;
	Mod<HASH_MOD_1> h1;
	Hash(int x = 0):ln(x > 0), h0(x), h1(x){}
	void up_e(int x){
		h0 *= hash_base_0[x];
		h1 *= hash_base_1[x];
	}
	void operator +=(const Hash &o){
		up_e(o.ln);
		ln += o.ln;
		h0 += o.h0;
		h1 += o.h1;
	}
	void rm_pre_e(Hash pr){
		pr.up_e(ln - pr.ln);
		ln -= pr.ln;
		h0 -= pr.h0;
		h1 -= pr.h1;
	}
	Hash up(int x)const { Hash an = *this; an.up_e(x); return an; }
	Hash operator +(const Hash &o)const { Hash an = *this; an += o; return an; }
	Hash rm_pre(const Hash &o)const { Hash an = *this; an.rm_pre_e(o); return an; }
	bool operator ==(const Hash &o)const { return h0 == o.h0 && h1 == o.h1; }
	bool operator !=(const Hash &o)const { return !(*this == o); }
};

ostream& operator <<(ostream &s, const Hash &x) { return s << x.h0 << ' ' << x.h1 << " ln=" << x.ln; }

struct HashArray{
	vector<Hash> v;
	HashArray():v(1){}
	void operator +=(char c) { v.emplace_back(v.back() + (c - 'a' + 1)); }
	template <class U> void operator +=(U x) { v.emplace_back(v.back() + x); }
	template <class U> HashArray(const U &u):HashArray() { v.reserve(u.size() + 1); fi(it, u)operator+=(*it); }
	Hash get_range(int l, int r)const { return v[r].rm_pre(v[l - 1]); }
};

//-------------------------------Hash---------------------------------
