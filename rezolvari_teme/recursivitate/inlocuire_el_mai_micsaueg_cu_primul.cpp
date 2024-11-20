/*
Scrieţi definiția completă a subprogramului C++ recursiv num care are 2 parametri:
n – prin care primește un număr natural și v, prin care primeşte un tablou unidimensional
cu n elemente, numere întregi cu cel mult 4 cifre.

Subprogramul înlocuieşte cu 0 fiecare valoare mai mică sau egală cu prima valoare din tablou.
Tabloul modificat este furnizat tot prin parametrul v.

Dacă n=7 şi v=(4, 5, 0, 9, 3, 4, -2), atunci după apel v=(0, 5, 0, 9, 0, 0, 0).
*/

#include <iostream>
using namespace std;

void num(int n, int v[]) {
    if(n > 0) {
        if(v[n-1] <= v[0]) {
            v[n-1] = 0;
        }
        num(n-1, v);
    } else if(n == 0) {
        v[0] = 0;
    }
}

int main() {
    int n = 7;
    int v[7] = {4, 5, 0, 9, 3, 4, -2};
    num(7, v);
    for(int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    return 0;
}
