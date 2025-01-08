/*
. Un text are cel mult 100 de caractere și este format din cuvinte și numere, separate prin câte un spațiu.
Cuvintele sunt formate numai din litere ale alfabetului englez. Toate numerele sunt reale și sunt formate
numai din parte întreagă sau din parte întreagă și parte fracționară, separate prin virgulă (,), numerele
negative fiind precedate de semnul minus (-). Cel puțin unul dintre numerele reale este negativ. Scrieți
un program C/C++ care citește de la tastatură textul, pe care îl transformă în memorie, înlocuind fiecare
număr negativ cu valoarea sa absolută. Programul afișează apoi pe ecran textul obținut.
Exemplu: pentru textul Modul de -3,24 este 3,24 si modul de -15 este 15
se va afișa pe ecran textul: Modul de 3,24 este 3,24 si modul de 15 este 15
*/
#include <iostream>
#include<string.h>
using namespace std;
int main() {
    char text[100];
    char *cuv;
    //int i;
    cin.get(text, 100, '\n');
    //cout << "textul tastat: " <<text << endl;
    cuv = strtok(text, " ");
    while(cuv != '\0') {
        if(cuv[0] != '-') {
            cout << cuv << " ";
        } else {
            cout << &cuv[1] << " ";
        }
        cuv = strtok('\0', " ");
    }

    return 0;
}
