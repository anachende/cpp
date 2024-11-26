#include <iostream>
using namespace std;
/*int cmmmc(int a, int b) {
    if(a == b) {
        return a;
    } else {
        if(a > b) {
            return cmmmc(a+b, b);
        } else {
            return cmmmc(a, b+a);
        }
    }
}
*/
int main() {
    int a = 24;
    int b = 15;

    int m, n;

    m = a, n = b;
    while(m != n) {
        if(m < n) {
            m = m + a;
        } else {
            n = n + b;
        }
    }
    cout << "cmmmc = " << m;
    return 0;
}
