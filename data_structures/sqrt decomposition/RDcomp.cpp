struct RDcomp{
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