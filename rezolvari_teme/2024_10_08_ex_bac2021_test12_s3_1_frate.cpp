/*
Un număr y este numit frate mai mare al unui număr x dacă x și y au același număr de cifre și fiecare cifră
a lui y se poate obține din cifra aflată pe aceeași poziție în x adunând la aceasta valoarea 1.
Subprogramul frate are doi parametri:
• x, prin care primește un număr natural (x[0,109]);
• y, prin care furnizează fratele mai mare al lui x, sau -1, dacă nu se poate obține un astfel de număr.
Scrieți definiția completă a subprogramului.
Exemplu: dacă x=1027, după apel y=2138, iar dacă x=9027, după apel y=-1
*/

#include <iostream>
using namespace std;

void frate(int x, int &y) {
    int uc;
    /*
     fiecare cifra frate trebuie sa fie cifra_x + 1 si sa fie cifra - adica < 10
     daca cifra_x = 9, cifra frate = 9+1 = 10, nu mai avem cifra ci numar
     deci numarul nu poate avea frate pentru acest caz
     putem verifica cifra din x - daca este 9 nu poate avea frate
    */

    int y_og = 0;
    uc = x % 10; //avem nevoie de ultima cifra din x pentru a vedea daca intram in bucla while
    if(uc == 9) {
        y = -1;
    } else {
        while(x > 0 && uc < 9) {
            uc = x % 10;
            x = x / 10;
            if(uc == 9) { //9 pe orice pozitie -> nu are frate
                y = -1;
            } else {
                y_og = y_og*10 + uc + 1;
            }
        }
    }
    if(y != -1) {
        y = 0;
        while(y_og > 0) {
            uc = y_og % 10;
            y_og = y_og / 10;
            y = y*10 + uc;
        }
    }
}

int main() {
    int x = 1027;
    int y;
    //pt x = 1027 -> y = 2138
    //x = 9027; // y va fi: -1
    //x = 8927;

    frate(x, y);
    cout << "x = " << x << ", y = " << y << endl;
    return 0;
}
