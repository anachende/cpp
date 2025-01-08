/*
Un text cu cel mult 100 de caractere conține cuvinte și numere, separate
 prin câte un spațiu. Cuvintele sunt formate numai din litere mici ale
 alfabetului englez, iar numerele sunt reale, pozitive, cu partea
întreagă și partea zecimală separate prin simbolul virgulă, sau numai cu partea
întreagă, ca în exemplu. Scrieți un program C/C++ care citește de la tastatură
un text de tipul precizat și îl transformă în memorie, înlocuind fiecare număr
real cu partea întreagă a acestuia.
Exemplu: pentru textul
partea intreaga a lui 5,75 este egala cu a lui 5,25 si cu a lui 5 si este 5
se afișează pe ecran
partea intreaga a lui 5 este egala cu a lui 5 si cu a lui 5 si este 5
*/

#include <iostream>
#include<string.h>
using namespace std;
int main() {
    char text[100];
    char *cuv;
    char *c1;
    int i;
    bool afiseaza;

    cin.get(text, 100, '\n');
    //cout << "textul tastat: " <<text << endl;
    cuv = strtok(text, " ");
    while(cuv != '\0') {
        //cout << cuv << endl;
        for(i = 0; i < strlen(cuv); i++) {
            if(cuv[i] == ',') {
                cuv[i] = '\0';
            }
        }
        cout << cuv << " ";

        cuv = strtok('\0', " ");
    }
    return 0;
}
