#include<bits/stdc++.h>

#pragma GCC optimize("unroll-loops", "Ofast")
//#pragma GCC target("avx,avx2,fma")

using namespace std;

using ll = long long;
using ull = unsigned long long;
using uint = unsigned int;
using str = string;
using ld = long double;
using db = double;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define RVOUT(a) for(int II = (a).size() - 1; II > -1; --II) cout << (a)[II] << ' ';
#define RVOUTN(a) for(int II = (a).size() - 1; II > -1; --II) cout << (a)[II] << '\n';
#define VVIN(a) for(ll II = 0; II < (a).size(); ++II) for(ll JJ = 0; JJ < (a)[II].size(); JJ++) cin >> (a)[II][JJ];
#define VVOUT(a) for(ll II = 0; II < (a).size(); ++II) { for(ll JJ = 0; JJ < (a)[II].size(); JJ++) cout << (a)[II][JJ] << ' '; cout << '\n';}
#define FOROUT(type, a) for(type LKL : a) cout << LKL << ' ';
#define FOROUTN(type, a) for(type LKL : a) cout << LKL << '\n';
#define vv(type, name, h, ...) vector<vector<type>> name(h, vector<type>(__VA_ARGS__))
#define MIN(v) *min_element(all(v))
#define MAX(v) *max_element(all(v))
#define FOR1(n) for(ll _ = 0; _ < n; ++_)
#define FOR2(i, n) for(ll i = 0; i < n; ++i)
#define FOR3(i, a, b) for(ll i = a; i < b; ++i)
#define FOR4(i, a, b, c) for(ll i = a; i < b; i+=(c))
#define FOR1_R(n) for(ll _ = n - 1; _ > -1; --_)
#define FOR2_R(i, n) for(ll i = n - 1; i > -1; --i)
#define FOR3_R(i, a, b) for(ll i = a; i >= b; --i)
#define overload4(a, b, c, d, e, ...) e
#define overload3(a, b, c, d, ...) d
#define FOR(...) overload4(__VA_ARGS__, FOR4, FOR3, FOR2, FOR1)(__VA_ARGS__)
#define FOR_R(...) overload3(__VA_ARGS__, FOR3_R, FOR2_R, FOR1_R)(__VA_ARGS__)
#define LB(a, k) distance((a).begin(), lower_bound(all(a), (k)))
#define UB(a, k) distance((a).begin(), upper_bound(all(a), (k)))
#define len(a) int(a.size())
#define lenll(a) ll(a.size())
#define eb emplace_back
#define pb push_back
#ifdef LOCAL
#define SHOW1(a) cout<<#a<<" = "<<(a)<<'\n'
#define SHOW2(a, b) cout<<#a<<" = "<<(a)<<", "<<#b<<" = "<<(b)<<'\n'
#define SHOW3(a, b, c) cout<<#a<<" = "<<(a)<<", "<<#b<<" = "<<(b)<<", "<<#c<<" = "<<(c)<<'\n'
#define SHOW4(a, b, c, d) cout<<#a<<" = "<<(a)<<", "<<#b<<" = "<<(b)<<", "<<#c<<" = "<<(c)<<", "<<#d<<" = "<<(d)<<'\n'
#define SHOW5(a, b, c, d, e) cout<<#a<<" = "<<(a)<<", "<<#b<<" = "<<(b)<<", "<<#c<<" = "<<(c)<<", "<<#d<<" = "<<(d)<<", "<<#e<<" = "<<(e)<<'\n'
#define SHOW6(a, b, c, d, e, f) cout<<#a<<" = "<<(a)<<", "<<#b<<" = "<<(b)<<", "<<#c<<" = "<<(c)<<", "<<#d<<" = "<<(d)<<", "<<#e<<" = "<<(e)<<", "<<#f<<" = "<<(f)<<'\n'
#define overload6(a, b, c, d, e, f, g, ...) g
#define SHOW(...) overload6(__VA_ARGS__, SHOW6, SHOW5, SHOW4, SHOW3, SHOW2, SHOW1)(__VA_ARGS__)
#else
#define SHOW(...)
#endif

using mpi = map<int, int>;
using mpll = map<ll, ll>;
using sint = set<int>;
using sll = set<ll>;
using pi = pair<int, int>;
using vpi = vector<pi>;
using pll = pair<ll, ll>;
using vpll = vector<pll>;
using vull = vector<ull>;
using vi = vector<int>;
using vvi = vector<vector<int>>;
using vll = vector<long long>;
using vvll = vector<vector<long long>>;
template <class T>
using vc = vector<T>;
template <class T>
using vvc = vector<vc<T>>;
template <class T>
using vvvc = vector<vvc<T>>;
template <class T>
using PAIR = pair<T, T>;

template <typename T, typename U>
istream &operator>>(istream &in, pair<T, U> &a) {
    in >> a.first >> a.second;
    return in;
}

template <typename T, typename U>
ostream &operator<<(ostream &out, pair<T, U> &a) {
    out << a.first << ' ' << a.second;
    return out;
}

template <typename T>
istream &operator>>(istream &in, vector<T> &a) {
    for (auto &x : a) in >> x;
    return in;
}

template <typename T>
ostream &operator<<(ostream &out, vector<T> &a) {
    for (auto &x : a) out << x <<' ';
    return out;
}

void read() {}
template <class H, class... T>
void read(H &h, T &... t) {
    cin >> h; read(t...);
}

void readg() {}
template <class H, class... T>
void readg(H &h, T &... t) {
    getline(cin, h); readg(t...);
}

void print() { cout << '\n';}
template <class H, class... T>
void print(H h, T ... t){
    cout << h << " "; print(t...);
}

#define INT(...)     \
    int __VA_ARGS__; \
    read(__VA_ARGS__)
#define UINT(...)     \
    uint __VA_ARGS__; \
    read(__VA_ARGS__)
#define LL(...)     \
    ll __VA_ARGS__; \
    read(__VA_ARGS__)
#define ULL(...)     \
    ull __VA_ARGS__; \
    read(__VA_ARGS__)
#define STR(...)     \
    string __VA_ARGS__; \
    read(__VA_ARGS__)
#define STRG(...)     \
    string __VA_ARGS__; \
    readg(__VA_ARGS__)
#define CHAR(...)     \
    char __VA_ARGS__; \
    read(__VA_ARGS__)
#define FLOAT(...)     \
    float __VA_ARGS__; \
    read(__VA_ARGS__)
#define DOUBLE(...)     \
    double __VA_ARGS__; \
    read(__VA_ARGS__)
#define VEC(type, name, size) \
    vector<type> name(size);    \
    cin >> name
#define VV(type, name, h, w)                     \
    vector<vector<type>> name(h, vector<type>(w)); \
    VVIN(name)
#define ff first
#define ss second
#define ins insert

template <class A, class B>
inline bool chmax(A &a, const B b) {
    if(a < b){ a = b; return 1; }
    return 0;
}

template <class A, class B>
inline bool chmin(A &a, const B b) {
    if(a > b){ a = b; return 1; }
    return 0;
}

template <typename T, typename U>
vector<T> prefsum(vector<U> &A, int off = 1) {
    int N = A.size();
    vector<T> B(N + 1);
    for (int i = 0; i < N; ++i) {
        B[i + 1] = B[i] + A[i];
    }
    if (off == 0) B.erase(B.begin());
    return B;
}

template <typename T, typename U>
T SUM(const vector<U> &A) {
    T sm = 0;
    for (auto &&a: A) sm += a;
    return sm;
}

template <typename T>
T tpow(int m)
{
    T ans = 1;
    for(int i = 0; i < m; ++i) ans *= 10;
    return ans;
}

template<typename T>
T div_up(T a, T b) {
    if (a == 0) return 0;
    return (a - 1) / b + 1;
}

template<typename T>
T lcm(T a, T b) {
    return a * b / __gcd(a, b);
}

template<typename T>
T numsum(T a, int e = 0)
{
    T res = 0, anores = 0;
    while(a > 0){
        res++;
        anores += a % 10;
        a /= 10;
    }
    return (e ? res : anores);
}

template <typename T, typename H>
T bin_pow(T a, H b)
{
    T ans = 1, c = a;
    while(b > 0){
        if(b & 1) ans = ans * c;
        c *= c;
        b >>= 1;
    }
    return ans;
}

void YES(bool t = 1) { cout << (t ? "YES" : "NO") << '\n'; }
void NO(bool t = 1) { YES(!t); }
void Yes(bool t = 1) { cout << (t ? "Yes" : "No") << '\n'; }
void No(bool t = 1) { Yes(!t); }
void yes(bool t = 1) { cout << (t ? "yes" : "no") << '\n'; }
void no(bool t = 1) { yes(!t); }
/*
struct segtree_sum // segment tree for sum on segment
{
    vector<long long> tree;
    int size;
 
    void init(int n){
        size = 1;
        while(size < n) size *= 2;
        tree.assign(2 * size - 1, 0);
    }
 
    void set(int i, int v, int x, int lx, int rx)
    {
        if(rx - lx == 1){
            tree[x] = v;
            return;
        }
        int m = (lx + rx) / 2;
        if(i < m){
            set(i, v, 2 * x + 1, lx, m);
        }
        else{
            set(i, v, 2 * x + 2, m, rx);
        }
        tree[x] = tree[2 * x + 1] + tree[2 * x + 2];
    }
 
    void set(int i, int v){
        set(i, v, 0, 0, size);
    }
 
    ll sum(int l, int r, int x, int lx, int rx)
    {
        if(l >= rx || lx >= r) return 0;
        if(lx >= l && rx <= r) return tree[x];
        int m = (lx + rx) / 2;
        return sum(l, r, 2 * x + 1, lx, m) + sum(l, r, 2 * x + 2, m, rx);
    }
 
    ll sum(int l, int r)
    {
        return sum(l, r, 0, 0, size);
    }
};
*/

/*
struct segtree_min // segment tree for minimum on segment
{
    vector<long long> tree;
    int size;

    void init(int n){
        size = 1;
        while(size < n) size *= 2;
        tree.assign(2 * size - 1, LLONG_MAX);
    }

    void set(int i, int v, int x, int lx, int rx)
    {
        if(rx - lx == 1){
            tree[x] = v;
            return;
        }
        int m = (lx + rx) / 2;
        if(i < m){
            set(i, v, 2 * x + 1, lx, m);
        }
        else{
            set(i, v, 2 * x + 2, m, rx);
        }
        tree[x] = min(tree[2 * x + 1], tree[2 * x + 2]);
    }

    void set(int i, int v){
        set(i, v, 0, 0, size);
    }

    ll sum(int l, int r, int x, int lx, int rx)
    {
        if(l >= rx || lx >= r) return LLONG_MAX;
        if(lx >= l && rx <= r) return tree[x];
        int m = (lx + rx) / 2;
        return min(sum(l, r, 2 * x + 1, lx, m), sum(l, r, 2 * x + 2, m, rx));
    }

    ll sum(int l, int r)
    {
        return sum(l, r, 0, 0, size);
    }
};
*/

/*
struct segtree_number_of_mins // segment tree for number of minimums of segment
{
    vector<pair<ll, ll>> tree;
    int size;
 
    void init(int n){
        size = 1;
        while(size < n) size *= 2;
        tree.assign(2 * size - 1, {LLONG_MAX, 0});
    }
 
    void set(int i, int v, int x, int lx, int rx)
    {
        if(rx - lx == 1){
            tree[x] = {v, 1};
            return;
        }
        int m = (lx + rx) / 2;
        if(i < m){
            set(i, v, 2 * x + 1, lx, m);
        }
        else{
            set(i, v, 2 * x + 2, m, rx);
        }
        if(tree[2 * x + 1].first == tree[2 * x + 2].first){
            tree[x] = {(tree[2 * x + 1].first), (tree[2 * x + 1].second + tree[2 * x + 2].second)};
        }
        else tree[x] = {min(tree[2 * x + 1].first, tree[2 * x + 2].first), (tree[2 * x + 1].first < tree[2 * x + 2].first ? tree[2 * x + 1].second : tree[2 * x + 2].second)};
    }
 
    void set(int i, int v){
        set(i, v, 0, 0, size);
    }
 
    pair<ll, ll> sum(int l, int r, int x, int lx, int rx)
    {
        if(l >= rx || lx >= r) return {LLONG_MAX, 0};
        if(lx >= l && rx <= r) return tree[x];
        int m = (lx + rx) / 2;
        pair<ll, ll> sum1 = sum(l, r, 2 * x + 1, lx, m), sum2 = sum(l, r, 2 * x + 2, m, rx);
        if(sum1.first == sum2.first){
            return {sum1.first, sum1.second + sum2.second};
        }
        return min(sum1, sum2);
    }
 
    pair<ll, ll> sum(int l, int r)
    {
        return sum(l, r, 0, 0, size);
    }
};
*/



/* // modulo arithmetic
const int MOD = 1e9+7; //998244353;

inline int mmd(int a, int b){
    return (a * 1LL * b % MOD);
}

int binpow(int a, int b)
{
    int ans = 1 % MOD, c = a;
    while(b > 0){
        if(b & 1) ans = mmd(ans, c);
        c = mmd(c, c);
        b >>= 1;
    }
    return ans;
}

inline int dmd(int a, int b){
    return mmd(a, (binpow(b, MOD - 2)));
}

const int MAXN = 1e7;

vector <int> fact = [](){
    vector <int> f(MAXN + 1);
    f[0] = 1;
    for (int i = 1; i <= MAXN; ++i) f[i] = mmd(f[i - 1],i);
    return f;
}();

vector <int> infact = [](){
    vector <int> f(MAXN + 1);
    f[MAXN] = binpow(fact[MAXN], MOD - 2);
    for (int i = MAXN - 1; i >= 0; --i) f[i] = mmd(f[i + 1], i + 1);
    return f;
}();

int C(int n, int k){
    if (k < 0 || k > n || n < 0) return 0;
    return mmd(mmd(fact[n], infact[n - k]), infact[k]);
}
*/

/*
struct RDcomp{ // sqrt decomposition
    int len, blocklen, bcnt;
    vector<int> a;
    RDcomp(const vector<int>& A){
        len = (int)(A.size());
        a = A;
        blocklen = (int)(ceil(sqrt(len / 2.)));
        //blocklen = 1;
        //blocklen = 256;
        //blocklen = 512;
        bcnt = len / blocklen + 1;
    }
    int bget(int P) const {
        return P / blocklen;
    }
    int bbeg(int B) const {
        return B * blocklen;
    }
    int bend(int B) const {
        return min(len, bbeg(B) + blocklen);
    }
    void Bblock(int b){
        int beg = bbeg(b), end = bend(b);
        for(int i = beg; i < end; ++i){
            
        }
    }
    void build(){
        for (int i = 0; i < bcnt; ++i)
        {
            Bblock(i);
        }
    }
    
};
*/

void solve() {
    $END$
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    for (int i = 0; i < t; ++i) {
    	solve();
    }
    return 0;
}
$0$