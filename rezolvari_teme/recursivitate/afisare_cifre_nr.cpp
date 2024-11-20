#include <iostream>
using namespace std;
void afisare(int n) {
    if(n > 0) {
        afisare(n / 10);
        cout << n % 10 << endl;

    }
}
int main() {
    int n = 234710;
    afisare(n);
}
