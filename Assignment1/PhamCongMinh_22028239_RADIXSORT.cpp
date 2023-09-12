#include <bits/stdc++.h>

using namespace std;

int findMax(int* arr, int n) {
    int m = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] > m) {
            m = arr[i];
        }
    }
    return m;
}

void countingSort(int* arr, int n, int exp) {
    int* output = new int[n];
    int cnt[10] = {0};

    for (int i = 0; i < n; i++) {
        cnt[(arr[i] / exp) % 10]++;
    }

    for (int i = 1; i < 10; i++) {
        cnt[i] += cnt[i - 1];
    }

    for (int i = n - 1; i >= 0; i--) {
        output[cnt[(arr[i] / exp) % 10] - 1] = arr[i];
        cnt[(arr[i] / exp) % 10]--;
    }

    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
    }

    delete[] output;
}

void radixSort(int* arr, int n) {
    int m = findMax(arr, n);

    for (int exp = 1; m / exp > 0; exp *= 10) {
        countingSort(arr, n, exp);
    }
}

int main() {
    int n = 8;
    int* arr = new int[n]{39, 25, 12, 800, 9204, 32423, 1, 4358435};

    radixSort(arr, n);


    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    delete[] arr;

    return 0;
}
