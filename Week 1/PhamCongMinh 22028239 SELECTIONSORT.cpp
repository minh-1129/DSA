#include <bits/stdc++.h>
using namespace std;

void print(int *arr, int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<' ';
    }
    cout<<endl;
}
void selectionsort(int n, int *arr) {
    for(int i = 0; i < n; i++) {
        int min_idx = i;
        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[min_idx])
                min_idx = j;
        }
        if(min_idx !=  i){
            swap(arr[i], arr[min_idx]);
            print(arr, n);
        }
    }
}

int main(){
    int n;
    cin>>n;
    int* arr = new int[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    selectionsort(n, arr);
    return 0;
}
