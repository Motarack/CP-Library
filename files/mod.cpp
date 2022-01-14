// Use Mint as the type, change MD for mod value

template <int M>
struct Mod{
	int x;
	Mod():x(){}
	template <class U>
	Mod(const U &o){
		if (o >= M || o < -M)x = o % M;
		else x = o;
		if (x < 0)x += M;
	}
	Mod& operator +=(const Mod &o) { if ((x += o.x) >= M)x -= M; return *this; }
	Mod& operator -=(const Mod &o) { if ((x -= o.x) <  0 )x += M; return *this; }
	Mod& operator *=(const Mod &o) { x = (ll)x * o.x % M; return *this; }
	Mod& operator /=(const Mod &o) { x /= o. x; return *this; }
	Mod& operator ++() { return *this += 1; }
	Mod& operator --() { return *this -= 1; }
	Mod  operator ++(int) { Mod an(*this); *this += 1; return an; }
	Mod  operator --(int) { Mod an(*this); *this -= 1; return an; }
	bool operator ==(const Mod &o)const { return x == o.x; }
	bool operator !=(const Mod &o)const { return x != o.x; }
	bool operator < (const Mod &o)const { return x <  o.x; }
	bool operator > (const Mod &o)const { return x >  o.x; }
	bool operator <=(const Mod &o)const { return x <= o.x; }
	bool operator >=(const Mod &o)const { return x >= o.x; }
};

template <int M> Mod<M> operator +(Mod<M> a, const Mod<M> &b) { return a += b; }
template <int M, class U> Mod<M> operator +(Mod<M> a, U b) { return a += b; }
template <int M, class U> Mod<M> operator +(U a, Mod<M> b) { return b += a; }
template <int M> Mod<M> operator -(Mod<M> a, const Mod<M> &b) { return a -= b; }
template <int M, class U> Mod<M> operator -(Mod<M> a, U b) { return a -= b; }
template <int M, class U> Mod<M> operator -(U a, Mod<M> b) { return b -= a; }
template <int M> Mod<M> operator *(Mod<M> a, const Mod<M> &b) { return a *= b; }
template <int M, class U> Mod<M> operator *(Mod<M> a, U b) { return a *= b; }
template <int M, class U> Mod<M> operator *(U a, Mod<M> b) { return b *= a; }
template <int M> Mod<M> operator /(Mod<M> a, const Mod<M> &b) { return a /= b; }
template <int M, class U> Mod<M> operator /(Mod<M> a, U b) { return a /= b; }
template <int M, class U> Mod<M> operator /(U a, const Mod<M> &b) { return Mod<M>(a) /= b; }
template <int M, class U> bool operator ==(U a, const Mod<M> &b) { return b == a; }
template <int M, class U> bool operator !=(U a, const Mod<M> &b) { return b != a; }
template <int M, class U> bool operator < (U a, const Mod<M> &b) { return b <  a; }
template <int M, class U> bool operator > (U a, const Mod<M> &b) { return b >  a; }
template <int M, class U> bool operator <=(U a, const Mod<M> &b) { return b <= a; }
template <int M, class U> bool operator >=(U a, const Mod<M> &b) { return b >= a; }
template <int M> istream& operator >>(istream &s, Mod<M> &x) { return s >> x.x; }
template <int M> ostream& operator <<(ostream &s, const Mod<M> &x) { return s << x.x; }

int const MD = 1e9 + 7;
using Mint = Mod<MD>;

//-----------------------------Mod-----------------------------------
