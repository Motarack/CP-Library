mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
template<class T> T get_rand(T l, T r) { return uniform_int_distribution<T>(l, r)(rng); }
template<class T> T get_rand(T n) { return uniform_int_distribution<T>(0, n - 1)(rng); }

//----------------------------RNG------------------------------------
