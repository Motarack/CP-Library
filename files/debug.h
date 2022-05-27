#include <bits/stdc++.h>
using namespace std;
#define f(i, x, n) for (int i = x; i < (int)(n); ++i)
#define fi(it, x) for (auto it = x.begin(); it != x.end(); ++it)
#define dug(...) cerr << '(' << #__VA_ARGS__ << "): ", dug_0(__VA_ARGS__)
#define dug_a(a, n) cerr << '(' << #a << "): ", dug_a_0(a, n)
#define dug_a2(a, n, m) cerr << '(' << #a << "): ", dug_a2_0(a, n, m)

template <class T> void debug(const T &x) { cerr << x; }

void debug(const string &s) { cerr << "\"" << s << "\""; }

template <class T1, class T2> void debug(const pair<T1, T2> &v) { cerr << '(' << v.first << ", " << v.second << ')'; }

template <class T>
void debug(const vector<T> &v){
	if (v.empty())cerr << "[]";
	else {
		cerr << '[';
		debug(v[0]);
		f(i, 1, v.size()){
			cerr << ", ";
			debug(v[i]);
		}
		cerr << ']';
	}
}

template <class T>
void debug(const vector<vector<T> > &v){
	if (v.empty())cerr << "[]";
	else {
		cerr << "[\n";
		debug(v[0]);
		f(i, 1, v.size()){
			cerr << ",\n";
			debug(v[i]);
		}
		cerr << "\n]";
	}
}

template <class T>
void debug(const set<T> &st){
	if (st.empty())cerr << "{}";
	else {
		cerr << '{';
		fi(it, st){
			if (it != st.begin())cerr << ", ";
			debug(*it);
		}
		cerr << '}';
	}
}

template <class T, class U>
void debug(const map<T, U> &mp){
	if (mp.empty())cerr << "{}";
	else {
		cerr << '{';
		fi(it, mp){
			if (it != mp.begin())cerr << ", ";
			debug(it->first);
			cerr << ": ";
			debug(it->second);
		}
		cerr << '}';
	}
}

template <class T> void dug_0(const T &x){
	debug(x);
	cerr << endl;
}

template <class T, class ... U>
void dug_0(const T &a, const U& ... b){
	debug(a);
	cerr << ", ";
	dug_0(b...);
}


template <class T>
void dug_a_0(T a[], int n){
	vector<T> x(a, a + n);
	debug(x);
	cerr << endl;
}

template <class T, int M>
void dug_a2_0(T a[][M], int n, int m){
	vector<vector<T> > x;
	f(i, 0, n)x.emplace_back(vector<T>(a[i], a[i] + m));
	debug(x);
	cerr << endl;
}
