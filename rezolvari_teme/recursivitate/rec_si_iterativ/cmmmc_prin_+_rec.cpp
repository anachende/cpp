#include <iostream>
using namespace std;

int cnt = 0;
int cmmmc(int m, int n, int a, int b) {
    cnt += 1;
    if(cnt == 10) {
        return -1;
    }
    if(m == n) {
        return m;
    } else {
        if(m < n) {
            cout << m << "  a < b " << n << endl;
            return cmmmc(m+a, n, a, b);
        } else {
            cout << a << "  a > b " << b << endl;
            return cmmmc(m, n+b, a, b);
        }
    }
}

int main() {
    int x = 5;
    int y = 3;
    cout << "aICI" << endl;
    cout << cmmmc(x, y, x, y);
    return 0;
}
