#include<iostream>
using namespace std;
int main() {
    int i, j, n, s=0;
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
    cin >> n;
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n; j++) {
            caut <<"a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }
    */
    n = 7;
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n; j++) {
            if(i < j && i+j > n+1 && j < n) {
                cout << i << " " << j << " " << a[i][j] << endl;
                s = s + a[i][j];
            }
        }
    }
    cout << s;
    return 0;
}
