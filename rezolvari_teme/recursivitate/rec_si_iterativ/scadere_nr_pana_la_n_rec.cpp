#include <iostream>
using namespace std;
int scadere(int n) {
    if(n == 0) {
        cout << n << endl;
        return 0;
    } else {
        cout << n << endl;
        return n - scadere(n - 1);
    }
}
int main() {
    int n = 3;
    cout << scadere(n);
    return 0;
}
