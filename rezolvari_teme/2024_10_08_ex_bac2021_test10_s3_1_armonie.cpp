/*
Numerele naturale x și y sunt numite în armonie dacă suma lor aparține intervalului deschis definit de
suma divizorilor lui x, respectiv suma divizorilor lui y.
Subprogramul armonie are doi parametri, x şi y, prin care primește câte un număr natural din intervalul
[1,106]. Subprogramul returnează valoarea 1, dacă x și y sunt în armonie, sau valoarea 0 în caz contrar.
Scrieți definiția completă a subprogramului.
Exemplu: dacă x=8, iar y=12 subprogramul returnează 1 (1+2+4+8=15, 1+2+4+6+12=25, iar
8+12=20(15,25)), iar dacă x=8 și y=13, subprogramul returnează 0 (1+2+4+8=15, 1+13=14, iar
8+13=21(14,15)).
*/

#include <iostream>
using namespace std;

int armonie(int x, int y) {
    int inarmonie = 0;
    int i;
    int s_div_x = 0, s_div_y = 0;

    //suma divizori x
    for(i = 1; i <= x; i++) {
        if(x%i == 0) {
            s_div_x = s_div_x + i;
        }
    }

    //suma divizori y
    for(i = 1; i <= y; i++) {
        if(y%i == 0) {
            s_div_y = s_div_y + i;
        }
    }

    if(s_div_x < s_div_y) {
        cout << "s_div_x: " << s_div_x << ", s_div_y: " << s_div_y << endl;
        if(s_div_x < x + y && x + y < s_div_y) {
            inarmonie = 1;
        }
    } else {
        cout << "s_div_y: " << s_div_y << ", s_div_x: " << s_div_x << endl;
        if(s_div_y < x + y && x + y < s_div_x) {
            inarmonie = 1;
        }
    }

    return inarmonie;
}

int main() {
    int x = 8;
    int y = 12;
    //y = 13;
    cout << "x = " << x << ", y = " << y << endl;
    cout << "In armonie: " << armonie(x, y);
    return 0;
}
