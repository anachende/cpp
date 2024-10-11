/*
Două numere se numesc oglindite dacă fiecare se obține din celălalt, prin parcurgerea cifrelor acestuia
de la dreapta la stânga. Două numere se numesc impar-oglindite dacă numerele obținute din acestea,
prin îndepărtarea tuturor cifrelor lor pare, sunt oglindite.
Subprogramul imog are trei parametri:
• x și y, prin care primește câte un număr natural din intervalul [0,109];
• rez, prin care furnizează valoarea 1 dacă x și y sunt impar-oglindite sau valoarea 0 în caz contrar.
Scrieți definiția completă a subprogramului.
Exemplu: dacă x=523 și y=84356, după apel rez=1,
iar dacă x=523 și y=84536 sau x=523 și y=84576 sau x=40 și y=86, după apel rez=0.
*/

#include <iostream>
using namespace std;

void imog(int x, int y, int &rez) {
    int x_c_imp_og = 0, y_c_imp_og = 0;
    int dublu_og_x_c_imp = 0;
    int uc;

    while(x > 0) {
        uc = x % 10;
        x = x / 10;
        if(uc % 2 == 1) {
            x_c_imp_og = x_c_imp_og*10 + uc;
        }
    }

    while(x_c_imp_og > 0) {
        uc = x_c_imp_og % 10;
        x_c_imp_og = x_c_imp_og / 10;
        dublu_og_x_c_imp = dublu_og_x_c_imp*10 + uc; // acelasi lucru cu: og = og + uc
    }
    cout << "dublu impar oglindit x: " << dublu_og_x_c_imp << ", ";

    while(y > 0) {
        uc = y % 10;
        y = y / 10;
        if(uc % 2 == 1) {
            y_c_imp_og = y_c_imp_og*10 + uc;
        }
    }
    cout << "impar oglindit y: " << y_c_imp_og << endl;

    // ambele numere sunt oglindite, de ex, daca
    // x=523   -> 35
    // si
    // y=84356 -> 53
    // trebuie sa gasim oglinditul unuia si sa vedem ca este egal cu celalalt
    // la fel cum ar fi fost daca in loc sa obtin impar oglinditul direct, nu oglindite



    //in cazul in care toate cifrele sunt pare - trebuie ca rez sa fie 0
    //cu toate ca atat y_c_imp_og si x_c_imp_og vor fi ambele 0
    //de aceea punem conditia suficienta ca doar unul din ele sa fie diferit de 0
    //conditia este suficienta pentru ca vine impreuna cu alta conditie si anume
    //oglinditele sa fie egale
    if(dublu_og_x_c_imp == y_c_imp_og && y_c_imp_og != 0) {
        rez = 1;
    } else {
        rez = 0;
    }
}

int main() {
    int x = 523;
    int y = 84356;
    int rezultat;
    //x = 523;
    //y = 84536;

    //x = 523;
    //y = 84576;

    //x = 40;
    //y = 86;

    cout << "x = " << x << ", y = " << y << endl;
    imog(x, y, rezultat);
    cout << "Impar oglindite: " << rezultat;
    return 0;
}
