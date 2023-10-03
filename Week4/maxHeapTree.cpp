#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e4 + 9;

class maxHeapTree {
private:
    int size;
    int heap[MAXN];

public:
    //Hàm khởi tạo
    maxHeapTree() {
        size = 0;
        for(int i = 1; i < MAXN; i++) {
            heap[i] = INT_MIN;
        }
        heap[0] = INT_MAX;
    }
    maxHeapTree(int value) {
        size = 1;
        for (int i = 1; i < MAXN; i++)
        {
            heap[i] = INT_MIN;
        }
        heap[0] = INT_MAX;
        heap[1] = value;
    }

    //Hàm để node nđi lên trên tạo thành max heap
    void goUp(int pos) {
        while(heap[pos/2] < heap[pos]) {
            swap(heap[pos/2], heap[pos]);
            pos /= 2;
        }
    }

    //Hàm insert node mới
    void insert(int value) {
        size++;
        heap[size] = value;
        goUp(size);
    }

    
    void diveDown(int pos) {
        int tmp = max(heap[2 * pos], heap[2 * pos + 1]);
        while(tmp > heap[pos]) {
            if (heap[2 * pos] == tmp) {
                swap(heap[pos], heap[2 * pos]);
                pos = 2 * pos;
            }  else {
                swap(heap[2 * pos + 1], heap[pos]);
                pos = 2 * pos + 1;
            }
        }
    }

    //Hàm loại bỏ đỉnh
    void removeTop() {
        if(size > 0) {
            heap[1] = heap[size];
            heap[size] = INT_MIN;
            size--;
            diveDown(1);
        }
    }

    //Hàm trả về giá trị lớn nhất trong cây
    int getMax() {
        if (size == 0) {
            cout<<"tree is empty\n";
            return INT_MIN;
        }
        return heap[1];
    }
};


int main() {
    maxHeapTree test(8);
    test.insert(1);
    test.insert(2);
    test.insert(10);
    test.insert(20);
    cout<<test.getMax();
    return 0;
}