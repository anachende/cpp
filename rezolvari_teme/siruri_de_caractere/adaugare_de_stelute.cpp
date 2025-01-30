#include <iostream>
#include <string.h>
using namespace std;
int main() {
    int n, i, j;
    cout << "n = ";
    cin >> n;
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    for(i = n+1; i <= 2*n-1; i++) {
        //cout << "i = " << i << " - " << 2*n -i << endl;
        for(j = 1; j <= 2*n -i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

/*
n = 4
1) *
2) **
3) ***
4) ****   n             - n    stelute                    i  - in for-ul 2
5) ***    n+1 = 5       - n-1  stelute   --- n-1 = 2*n -(n+1)
6) **     n+2 = 6       - n-2  stelute   --- n-2 = 2*n -(n+2)
7) *      2n-1 = 8-1 = 7
*/
