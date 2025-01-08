/*
Un text cu cel mult 100 de caractere conține cuvinte și numere, separate prin câte un spațiu. Cuvintele
sunt formate numai din litere mici ale alfabetului englez, iar numerele sunt reale, pozitive, cu partea
zecimală și partea întreagă separate prin simbolul virgulă, sau numai cu partea întreagă, ca în exemplu.
Scrieți un program C/C++ care citește de la tastatură un text de tipul precizat și afișează pe ecran
numărul de valori întregi din text.
Exemplu: pentru textul
grus leucogeranus are 1,40 m inaltime si traieste intre 30 si 40 de ani
se afișează pe ecran 2
*/

#include <iostream>
#include<string.h>
using namespace std;
int main() {
    char text[100];
    char *cuv;
    char c;
    int lungime_cuv;
    int i;
    bool este_intreg;
    int contor_intregi = 0;

    cin.get(text, 100, '\n');
    //cout << "textul tastat: " <<text << endl;
    cuv = strtok(text, " ");
    while(cuv != '\0') {
        este_intreg = 1;
        lungime_cuv = strlen(cuv);
        for(i = 0; i < lungime_cuv && este_intreg == 1; i++) {
            c = cuv[i];
            //cout << "---" << c << endl;
            if(c < '0' || c > '9') {
                este_intreg = 0;
                //cout << "caracter ne cifra:" << c << endl;
            }
        }

        if(este_intreg) {
            contor_intregi++;
            //cout << cuv << " ";
        }
        cuv = strtok('\0', " ");
    }
    cout << contor_intregi;
    return 0;
}
