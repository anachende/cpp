#include <iostream>
using namespace std;
int cmmdc(int a, int b) {
    int r;
    while(b != 0) {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}
int main() {
    int x = 5;
    int y = 3;
    cout << cmmdc(x, y);
    return 0;
}
