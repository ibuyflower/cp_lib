#include<bits/stdc++.h>

#pragma GCC optimize("unroll-loops", "Ofast")
//#pragma GCC target("avx,avx2,fma")

using namespace std;

using ll = long long;
using ull = unsigned long long;
using uint = unsigned int;
using str = string;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define VOUT(a) { for(size_t II = 0; II < (a).size(); ++II) cout << (a)[II] << ' '; }
#define VOUTN(a) { for(size_t II = 0; II < (a).size(); ++II) cout << (a)[II] << '\n'; }
#define RVOUT(a) { for(int II = (a).size() - 1; II > -1; --II) cout << (a)[II] << ' '; }
#define RVOUTN(a) { for(int II = (a).size() - 1; II > -1; --II) cout << (a)[II] << '\n'; }
#define VVIN(a) { for(size_t II = 0; II < (a).size(); ++II) for(size_t JJ = 0; JJ < (a)[II].size(); JJ++) cin >> (a)[II][JJ]; }
#define VVOUT(a) { for(size_t II = 0; II < (a).size(); ++II) { for(size_t JJ = 0; JJ < (a)[II].size(); JJ++) cout << (a)[II][JJ] << ' '; cout << '\n';} }
#define FOROUT(type, a) { for(type LKL : a) cout << LKL << ' '; }
#define FOROUTN(type, a) { for(type LKL : a) cout << LKL << '\n'; }
#define vv(type, name, h, ...) { vector<vector<type>> name(h, vector<type>(__VA_ARGS__)) }
#define VEC1(type, name, size) vector<type> name(size)
#define VEC2(type, name, ...) vector<type> name(__VA_ARGS__)
#define MIN(v) *min_element(all(v))
#define MAX(v) *max_element(all(v))
#define FOR(n) for(ll _ = 0; _ < n; ++_)
#define FOR1(i, n) for(ll i = 0; i < n; ++i)
#define FOR2(i, n) for(ll i = 0; i <= n; ++i)
#define FOR3(i, a, b) for(ll i = a; i <= b; ++i)
#define FOR4(i, a, b) for(ll i = a; i < b; ++i)
#define FOR1R(i, n) for(ll i = n - 1; i > -1; --i)
#define FOR3R(i, a, b) for(ll i = a; i >= b; --i)
#define LB(a, k) distance((a).begin(), lower_bound(all(a), (k)))
#define UB(a, k) distance((a).begin(), upper_bound(all(a), (k)))
#define len(a) int(a.size())
#define lenll(a) ll(a.size())

using mi = map<int, int>;
using mll = map<ll, ll>;
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
#define fi first
#define se second
#define ins insert

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

ll tpow(int m)
{
    ll ans = 1;
    FOR1(i, m) ans *= 10;
    return ans;
}

template<typename T>
T div_up(T a, T b) {
    if (a == 0) return 0;
    return (a - 1) / b + 1;
}

template<typename T>
T lcm(T &a, T &b) {
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

void YES(bool t = 1) { cout <<  (t ? "YES" : "NO") << '\n'; }
void NO(bool t = 1) { YES(!t); }
void Yes(bool t = 1) { cout <<  (t ? "Yes" : "No") << '\n'; }
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
