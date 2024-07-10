void sortparts(vector<int>& s, int a, int b, int c, int d)
{
    size_t n = d - a + 1;
    vector<int> w;
    int j = c, i = a;
    for (; i <= b && j <= d;) {
        if(s[i] < s[j]){
            w.push_back(s[i]);
            i++;
        }
        else{
            w.push_back(s[j]);
            j++;
        }
    }
    for (; i <= b ; ++i) {
        w.push_back(s[i]);
    }
    for (; j <= d ; ++j) {
        w.push_back(s[j]);
    }
    for (int k = a; k <= d; ++k) {
        s[k] = w[k - a];
    }
}

void mergesort(vector<int>& a, int i, int j)
{
    if(j == i) return;
    if(j - i == 1){
        if(a[i] > a[j]) swap(a[i], a[j]);
        return;
    }
    mergesort(a, i, (j - i) / 2 - 1 + i);
    mergesort(a,(j - i) / 2 + i, j);
    sortparts(a, i, (j - i) / 2 - 1 + i, (j - i) / 2 + i, j);
}