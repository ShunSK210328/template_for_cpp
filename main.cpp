#include <bits/stdc++.h>
using namespace std;

// #define __NL_IS_ENDL__
// #define __YESNO__
// #define __yesno__

////////////////////////////////////////////////////////////////////////////////
//
// マクロ
//
#define rep(i, a, b) for (ll i = (a); i < (b); ++i)
#define repe(i, a, b) for (int i = (a); i <= (b); ++i)
#define rrep(i, a, b) for (int i = (a); i > (b); --i)
#define rrepe(i, a, b) for (int i = (a); i >= (b); --i)
#define fore(a, b) for (auto a : (b))
#define rng(a) (a).begin(), (a).end()
#define rrng(a) (a).rbegin(), (a).rend()
#define sc_i(a) static_cast<int>(a)
#define sc_l(a) static_cast<ll>(a)
#define sc_d(a) static_cast<double>(a)
#define sc_c(a) static_cast<char>(a)
#define trace1(a) debug_print(cerr, "[", __LINE__, "] ", #a "=", a)
#define trace(...) debug_print(cerr, "[", __LINE__, "] ", __VA_ARGS__)
//
////////////////////////////////////////////////////////////////////////////////
//
// 型エイリアス
//
// clang-format off
using uint = unsigned int;
using ull = unsigned long long;
using ll = long long;
using pii = pair<int, int>;
template <class T> using vc = vector<T>;
template <class T> using vv = vc<vc<T>>;
using vi = vc<int>;
using vvi = vv<int>;
using vll = vc<ll>;
using vvll = vv<ll>;
using vpii = vc<pii>;
using vvpii = vv<pii>;
using vb = vc<bool>;
using vvb = vc<vb>;
using vs = vc<string>;
// clang-format on
//
////////////////////////////////////////////////////////////////////////////////
//
// ライブラリ
//
#if defined(__NL_IS_ENDL__)
#define NL endl
#else
#define NL '\n'
#endif
#if defined(__YESNO__)
const string YES = "YES";
const string NO = "NO";
#elif defined(__yesno__)
const string YES = "yes";
const string NO = "no";
#else
const string YES = "Yes";
const string NO = "No";
#endif

template <class T1, class T2>
istream& operator>>(istream& is, pair<T1, T2>& a) {
    return is >> a.first >> a.second, is;
}

template <class T>
istream& operator>>(istream& is, vc<T>& a) {
    fore(&ai, a) is >> ai;
    return is;
}

template <class T>
istream& operator>>(istream& is, vv<T>& a) {
    fore(&ai, a) fore(&aij, ai) is >> aij;
    return is;
}

#pragma GCC diagnostic ignored "-Wunused-parameter"
void read(istream& is) {}
#pragma GCC diagnostic warning "-Wunused-parameter"

template <class Head, class... Tail>
void read(istream& is, Head& head, Tail&... tail) {
    is >> head, read(is, tail...);
}

template <class T1, class T2>
ostream& operator<<(ostream& os, const pair<T1, T2>& a) {
    return os << a.first << ' ' << a.second, os;
}

void print(ostream& os) { os << NL; }

template <class Head, class... Tail>
void print(ostream& os, const Head& head, const Tail&... tail) {
    os << head << ' ', print(os, tail...);
}

void debug_print(ostream& os) { os << NL; }

template <class Head, class... Tail>
void debug_print(ostream& os, const Head& head, const Tail&... tail) {
    os << head, debug_print(os, tail...);
}

inline void respond(bool ans, const string& t, const string& f) { cout << (ans ? t : f) << NL; }

inline void yesno(bool ans) { respond(ans, YES, NO); }

template <class T>
inline bool chmin(T& a, const T& b) {
    return a > b ? a = b, true : false;
}

template <class T>
inline bool chmax(T& a, const T& b) {
    return a < b ? a = b, true : false;
}

template <class T>
inline int len(const T& a) {
    return a.size();
}

template <ll X, int N>
struct Pow {
    static const ll value_ = Pow<X, N - 1>::value_ * X;
};

template <ll X>
struct Pow<X, 0> {
    static const ll value_ = 1LL;
};

template <class T>
struct Printable {
    const T& a_;
    const string delimiter_;

    Printable(const T& a, const string& delimiter = " ") : a_(a), delimiter_(delimiter) {}
};

template <class T>
ostream& operator<<(ostream& os, const Printable<T>& o) {
    bool flag = false;
    fore(ai, o.a_) {
        if (flag) os << o.delimiter_;
        flag = true;
        os << ai;
    }
    return os;
}

struct Timer {
    chrono::system_clock::time_point start_time_;
    int limit_;

    Timer(int limit) : limit_(limit) {}

    void start() { start_time_ = chrono::system_clock::now(); }

    int elapsed() {
        chrono::system_clock::time_point now = chrono::system_clock::now();
        return chrono::duration_cast<chrono::milliseconds>(now - start_time_).count();
    }

    bool is_expired() { return elapsed() > limit_; }

private:
    Timer() = default;
};

//
////////////////////////////////////////////////////////////////////////////////
//
// 問題の実装
//
// #include <atcoder/all>
// using namespace atcoder;

const ll LINF = Pow<10, 18>::value_ + 1LL;
const int INF = Pow<10, 9>::value_ + 1;
const array<int, 4> DX = {-1, 0, 1, 0};
const array<int, 4> DY = {0, -1, 0, 1};

mt19937 random_engine;

struct Problem {
    Problem() = default;

    void solve() {
        int n;
        read(cin, n);
    }

    void repeat_solve() {
        int t;
        cin >> t;
        rep(i, 0, t) solve();
    }
};

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(15);

    random_device seed_gen;
    random_engine.seed(seed_gen());

    Problem problem;
    problem.solve();
    // problem.repeat_solve()

    return 0;
}
