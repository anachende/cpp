/* Subprogramul suma are un singur parametru, n, prin care primește un număr natural (n[1,106]).
Subprogramul returnează suma divizorilor pozitivi ai lui n care nu sunt primi.
Scrieți definiția completă a subprogramului.
Exemplu: pentru n=12 subprogramul returnează 23 (23=1+4+6+12).*/


#include <iostream>
using namespace std;
int main() {
    int n, i, s, j;
    int prim;
    s = 0;
    n = 12;
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {  // este divizor
            //alegem doar divizorii care nu sunt primi
            //prim = 0;
            prim = 1; // presupunem ca i este prim
            for (j = 2; j <= i/2 && prim == 1; j++) { // verificam daca chiar este
                if(i % j == 0) {
                     prim = 0; // in caz ca are divizori - nu este si facem prim = 0
                }
            }

            if(i == 1) { // caz particular
                prim = 0; // consideram ca 1 nu este prim
            }

            if(prim == 0) {
                cout << " " << i;
                s = s + i;
            }
        }
    }
    cout << endl << s;
    return 0;
}
