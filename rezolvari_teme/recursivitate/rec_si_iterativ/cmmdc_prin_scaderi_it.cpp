#include <iostream>
using namespace std;
int cmmdc(int a, int b) {
    while(a != b) {
        if(a > b) {
            a = a - b;
        } else {
            b = b - a;
        }
    }
    return a;
}
int main() {
    int x = 4;
    int y = 6;
    cout << cmmdc(x, y);
    return 0;
}
