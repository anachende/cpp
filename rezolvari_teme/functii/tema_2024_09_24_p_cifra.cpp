#include <iostream>
using namespace std;

int p_cifra(int numar) {
    while(numar > 10) {
        numar = numar / 10;
    }
    return numar;
}

int main() {
    int n;
    cout << "Tastati un numar: ";
    cin >> n;

    cout << "Prima cifra este: " << p_cifra(n);
    return 0;
}
