#include <bits/stdc++.h>
using namespace std;
#define f(i, x, n) for (int i = x; i < (int)(n); ++i)
#define fi(it, x) for (auto it = x.begin(); it != x.end(); ++it)
#define dug(...) cerr << '(' << #__VA_ARGS__ << "): ", dug_0(__VA_ARGS__)

template <class T> void debug(const T &x) { cerr << x; }

void debug(const string &s) { cerr << "\"" << s << "\""; }

template <class T1, class T2> void debug(const pair<T1, T2> &v) { cerr << '(' << v.first << ", " << v.second << ')'; }

template <class T>
void debug(const vector<T> &v){
	if (v.empty())cerr << "[]";
	else {
		cerr << '[' << v[0];
		f(i, 1, v.size())cerr << ", " << v[i];
		cerr << ']';
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

