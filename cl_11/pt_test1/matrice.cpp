#include<iostream>
/*
a11 a12 a13
a21 a22 a23
a31 a32 a33
diag pr: i = j;
diag sec: i+j = N+1 (pt index de la 1); dedesupt diag sec: i+j > n+1
*/
using namespace std;
int main() {
    int i, j, n, s;

    int a[100][100] = {
        {0, 0, 0, 0, 0, 0, 0, 0},
        {0, 1, 2, 3, 4, 5, 5, 6},
        {0, 7, 8, 9, 0, 3, 1, 2},
        {0, 4, 6, 8, 0, 1, 1, 3},
        {0, 8, 6, 3, 6, 2, 4, 7},
        {0, 5, 7, 9, 2, 2, 5, 8},
        {0, 1, 4, 7, 0, 5, 3, 6},
        {0, 9, 2, 5, 8, 5, 9, 1}
    };
    /*
    cout << "n = ";
    cin >> n;
    for (i = 1; i <= n; i++) {
        for(j = 1; j <= n; j++) {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }
    */
    n = 7;
    s=0;
    for(i = 1; i<=n; i++) {
        for(j = 1; j<=n; j++) {
            //deasupra diag princ: i < j
            //deasupra diag sec:   i+j > N+1
            //nu ultima col:       j < N
            if(i < j && i+j > n+1 && j < n) {
                cout << i << " " << j << " - " << a[i][j] << endl;
                s = s + a[i][j];
            }
        }
    }
    cout << s;
    return 0;
}
