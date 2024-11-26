#include <iostream>
using namespace std;
int produs(int n) {
    int i;
    int produs = 1;
    for(i = 1; i <= n; i++) {
        produs = produs*i;
    }
    return produs;
}
int main() {
    int n = 3;
    cout << produs(n);
    return 0;
}
