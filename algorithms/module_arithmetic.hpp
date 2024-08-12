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