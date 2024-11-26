#include <iostream>
using namespace std;
bool prim(int n, int d) {
    if(n < 2) {
        return false; //0 sau 1
    }
    if(n % d == 0) {
        return false;
    }
    if(d > n/2) {
        return true;
    }
    return prim(n, d + 1);
}
int main() {
    int x = 47;
    if(prim(x, 2) == true) {
        cout << x << " este prim" << endl;
    } else {
        cout << x << " nu este prim" << endl;
    }
    return 0;
}
