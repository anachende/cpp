#include <iostream>
using namespace std;
void tiparire_div(int n, int d) {
    if(d <= n) {
        if(n % d == 0) {
            cout << d << endl;
        }
        tiparire_div(n, d + 1);
    }
}
int main() {
    tiparire_div(6, 1);
    return 0;
}
