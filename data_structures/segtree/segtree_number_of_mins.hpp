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