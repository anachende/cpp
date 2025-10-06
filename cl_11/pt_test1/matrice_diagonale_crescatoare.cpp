#include<iostream>
using namespace std;
int main() {
    int n, i, j;
    int a[10][10];
    cout << "n = ";
    cin >> n;
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n; j++) {
            if(i+j == n+1) {
                a[i][j] = n;
            } else if(i+j < n+1) {
                a[i][j] = n-((n+1) - (i+j));
            }else {
                a[i][j] = n-((i+j) - (n+1));
            }
        }
    }
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
