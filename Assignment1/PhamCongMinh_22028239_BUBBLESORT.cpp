#include <bits/stdc++.h>
using namespace std;

void print(int *arr, int n){
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<' ';
    }
    cout<<endl;
}
void bublesort(int n, int *arr) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j + 1 < n; j++) {
            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
                print(arr, n);
            }
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
    bublesort(n, arr);
    return 0;
}
