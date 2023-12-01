/*
1.	Chu trình Euler và chu trình Hamilton.
Chu trình Euler là chu trình đi qua tất cả các cạnh, mỗi cạnh đúng một lần. Chu trình Hamilton là chu trình đi qua tất cả các đỉnh, mỗi đỉnh đúng một lần.
Xét các đồ thị được cho bởi bốn tập cạnh sau:
0-1 0-2 0-3 1-3 1-4 2-5 2-9 3-6 4-7 4-8 5-8 5-9 6-7 6-9 7-8
0-1 0-2 0-3 1-3 0-3 2-5 5-6 3-6 4-7 4-8 5-8 5-9 6-7 6-9 8-8
0-1 1-2 1-3 0-3 0-4 2-5 2-9 3-6 4-7 4-8 5-8 5-9 6-7 6-9 7-8
4-1 7-9 6-2 7-3 5-0 0-2 0-8 1-6 3-9 6-3 2-8 1-5 9-8 4-5 4-7
Đồ thị nào có chu trình Euler? Đồ thị nào có chu trình Hamilton?
*/

/*
Đồ thị có chu trình Euler khi và chỉ khi các đỉnh đều có bậc chẵn
Đồ thị với số đỉnh n>=3 và mọi cặp đỉnh không kề có tổng bậc >= n thì có chu trình Hamilton
Đồ thị 1 có chu trình Euler vì tất cả các đỉnh đều có bậc chẵn và không có chu trình Hamilton vì không thỏa mãn điều kiện trên
Đồ thị 2 có chu trình Euler và không có chu trình Hamilton
Đồ thị 3 có chu trình Euler và có chu trình Hamilton
Đồ thị 4 không có chu trình Euler vì đỉnh 0 bậc lẻ (3) và không có chu trình Hamilton
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int e;
    cin>>e;

    bool hasEulerCycle = true;
    vector<int> degree(e, 0);

    for (int i = 0; i < e; i++) {
        int u, v;
        cin>>u>>v;
        degree[u]++;
        degree[v]++;
    }

    for (int i = 0; i < e; i++) {
        if (degree[i] % 2 != 0) {
            hasEulerCycle = false;
        }

    }

    if (hasEulerCycle) {
        cout << "Đồ thị có chu trình Euler" << endl;
    } else {
        cout << "Đồ thị không có chu trình Euler" << endl;
    }
}
