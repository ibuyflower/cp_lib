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