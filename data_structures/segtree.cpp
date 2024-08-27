struct vertex{
    
};

struct segtree{
    vector<vertex> tree;
    int size;
    segtree(int n){
        size = 1;
        while(size < n) size <<= 1;
        tree.assign(4*size, );
    }
    void set(int p, int f, int x, int lx, int rx){
        
    }
    void set(int p, int x){
        set(p, 0, x, 0, size);
    }
    int get(int p, int f, int lx, int rx){
        
    }
    int get(int x){
        return get(x, 0, 0, size);
    }
    void init(vector<int>& a){
        for(int i = 0; i < a.size(); ++i){
            set(i, a[i]);
        }
    }
};