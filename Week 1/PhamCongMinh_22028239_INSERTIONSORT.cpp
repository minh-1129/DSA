#include <bits/stdc++.h>
using namespace std;

void print(int *arr, int n)
{
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<' ';
    }
    cout<<endl;
}

void insertionsort(int* arr, int n)
{
    for(int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = 0;
        while(arr[j] < key) j++;
        for(int k = i - 1; k >= j; k--){
            arr[k + 1] = arr[k];
        }
        arr[j] = key;
        if(j != i) print(arr, n);
    }
}
int main(){
    int n; cin>>n;
    int* arr = new int[n];
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    insertionsort(arr, n);
    return 0;
}
