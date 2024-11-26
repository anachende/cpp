#include <iostream>
using namespace std;
int produs(int n) {
    if(n == 1) {
        return 1;
    } else {
        return n*produs(n - 1);
    }
}
int main() {
    int n = 3;
    cout << produs(n);
    return 0;
}
