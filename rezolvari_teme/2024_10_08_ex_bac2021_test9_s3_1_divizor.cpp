/*
Subprogramul divizor are patru parametri:
• a, b și k, prin care primește câte un număr natural (a[0,109], b[a,109], k[1,9]);
• nr, prin care furnizează numărul de valori naturale din intervalul [a,b] care sunt divizibile cu k și au
ultima cifră egală cu k. Scrieți definiția completă a subprogramului.
Exemplu: dacă a=3, b=50 și k=4, în urma apelului, nr=3 (pentru numerele 4, 24, 44).
*/

#include <iostream>
using namespace std;

void divizor(int a, int b, int k, int &nr) {
    int uc;
    int i;
    for(i = a; i <= b; i++) {
        if(i%k == 0 && i%10 == k) { // divizibil cu k si ultima cifra este k
            cout << "Nr OK: " << i << endl;
            nr++;
        }
    }
}

int main() {
    int n = 0;
    int a = 3;
    int b = 50;
    int k = 4;
    cout << "a = " << a << ", b = " << b << ", k = " << k << endl;
    divizor(3, 50, 4, n);
    cout << "Numarul de valori divizibile cu k si ultima cifra k: " << n;
    return 0;
}
