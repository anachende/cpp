#include <iostream>
using namespace std;
int scadere(int n) {
    if(n == 0) {
        return 0;
    } else {
        return n - scadere(n - 1);
    }
}
int main() {
    int n = 5;
    cout << scadere(n);
    return 0;
}
