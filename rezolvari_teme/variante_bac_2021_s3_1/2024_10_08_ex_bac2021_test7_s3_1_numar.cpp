/*
Subprogramul afisare are trei parametri:
• x și y, prin care primește câte un număr natural din intervalul [0,106] (xy);
• k, prin care primește un număr natural (k[2,102]).
Subprogramul afișează pe ecran, în ordine strict crescătoare, numerele din intervalul [x,y], în secvențe de
câte k, cu excepția ultimei secvențe care poate conține mai puțin de k numere. Fiecare secvență se încheie
cu câte un simbol *, iar numerele și simbolurile sunt separate prin câte un spațiu, ca în exemplu.
Scrieți definiția completă a subprogramului.
Exemplu: dacă x=11, y=21 și k=4 se afișează pe ecran numerele de mai jos, în acest format.
11 12 13 14 * 15 16 17 18 * 19 20 21 *
*/

#include <iostream>
using namespace std;

void afisare(int x, int y, int k) {
    int i;
    int j = 1;
    for(i = x; i <= y; i++) {
        if(j < k) {
            cout << i << " ";
            j++;
        } else if(j == k) {
            cout << i << " * ";
            j = 1;
        }
    }
    if(j > 1) {   // ultima secventa. chiar daca este de un numar, j va fi 2 pentru ca este imcrementat - linia 22
        cout << "*";
    }

}

int main() {
    afisare(11, 21, 4);
    return 0;
}
