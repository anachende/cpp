/*
Subprogramul identice are un singur parametru, n, prin care primește un număr natural (n[10,109]).
Subprogramul returnează valoarea 1, dacă numărul n are toate cifrele egale, sau valoarea 0 în caz contrar.
Scrieți definiția completă a subprogramului.
Exemplu: dacă n=2222, subprogramul returnează valoarea 1, iar dacă n=212, subprogramul
returnează valoarea 0.
*/


#include <iostream>
using namespace std;

int identice(int nr) {
    int veg = 1;
    int u, uc;
    u = nr % 10;
    while (nr > 0 && veg == 1) {
        uc = nr % 10;
        nr = nr / 10;
        if (u != uc) {
            veg = 0;
        }
    }
    return veg;
}

int main() {
    int n = 2222 ;
    cout << n << " cifre identice: " << identice(n);
    return 0;
}
