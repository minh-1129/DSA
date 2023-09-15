#include <bits/stdc++.h>

using namespace std;

void countingSort(int* arr, int n) {
    int max_value = *max_element(arr, arr + n);
    int min_value = *min_element(arr, arr + n);

    int range = max_value - min_value + 1;

    int* cnt = new int[range]();
    int* output = new int[n];

    for (int i = 0; i < n; i++) {
        cnt[arr[i] - min_value]++;
    }

    for (int i = 1; i < range; i++) {
        cnt[i] += cnt[i - 1];
    }

    for (int i = n - 1; i >= 0; i--) {
        output[cnt[arr[i] - min_value] - 1] = arr[i];
        cnt[arr[i] - min_value]--;
    }

    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
    }

    delete[] cnt;
    delete[] output;
}

int main() {
    int n = 7;
    int* arr = new int[n]{6, 546, 656, 456, 565, 56, 9};


    countingSort(arr, n);


    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }


    delete[] arr;

    return 0;
}

