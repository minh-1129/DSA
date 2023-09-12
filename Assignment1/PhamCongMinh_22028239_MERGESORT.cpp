#include <bits/stdc++.h>
using namespace std;
int n;
int a[1000];
void print(){
    for(int i = 0; i < n; i++){
        cout<<a[i]<<' ';
    }
    cout<<endl;
}
void Merge(int l, int r, int m){
    int* L = new int[m - l + 1];
    int* R = new int[r - m];
    for(int i = 0; i <= m - l; i++){
        L[i] = a[l + i];
    }
    for(int i = 0; i < r - m; i++){
        R[i] = a[m + 1 + i];
    }
    int i = 0, j = 0, cnt = l;
    while(i <= m - l && j < r - m){
        if(L[i] < R[j])
            a[cnt++] = L[i++];
        else
            a[cnt++] = R[j++];
    }
    while(i <= m - l) a[cnt++] = L[i++];
    while(j < r - m) a[cnt++] = R[j++];
    delete []L;
    delete []R;
}
void mergesort(int l, int r){
    if(l >= r) return;
    int m = (l + r)/2;
    mergesort(l, m);
    mergesort(m + 1, r);
    Merge(l, r, m);
    print();

}
int main(){
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    mergesort(0, n - 1);

}
