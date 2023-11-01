#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n;
    cin>>m>>n;

    int a[m + 1];
    int b[n + 1];

    int LCS[m + 1][n + 1];

    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            LCS[i][j] = 0;
        }
    }

    for (int i = 1; i <= m; i++){
        cin>>a[i];
    }
    for (int i = 1; i <= n; i++) {
        cin>>b[i];
    }

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            LCS[i][j] = max(LCS[i - 1][j], LCS[i][j - 1]);
            if (a[i] == b[j]) {
                LCS[i][j] = max(LCS[i][j], LCS[i - 1][j - 1] + 1);
            }
        }
    }
    cout<<LCS[m][n];
    return 0;
}
