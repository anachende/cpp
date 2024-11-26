#include <iostream>
using namespace std;
int cmmdc(int a, int b) {
    if(b == 0) {
        return a;
    } else {
        return cmmdc(b, a % b);
    }
}
int main() {
    int x = 4;
    int y = 6;
    cout << cmmdc(x, y);
    return 0;
}
