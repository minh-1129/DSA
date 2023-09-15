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

int Partition(int l, int r){

    int pivot = a[r];
    int i = l - 1;
    for(int j = l; j < r; j++){
        if(a[j] < pivot){
            i++;
            swap(a[j], a[i]);
        }
    }
    swap(a[r], a[i + 1]);
    return (i + 1);
}
void quicksort(int l, int r){
    if(l < r){
        int pi = Partition(l, r);
        print();
        quicksort(l, pi - 1);
        quicksort(pi + 1, r);


    }
}
int main(){
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    quicksort(0, n - 1);

}
