/*
Într-un text cu cel mult 102 caractere, cuvintele sunt formate din litere mici ale alfabetului englez și sunt
separate prin câte un spațiu. Scrieți un program C/C++ care citește de la tastatură un text de tipul precizat și
afișează pe ecran, pe linii separate, toate cuvintele sale care conțin o singură vocală distinctă, ca în exemplu.
Dacă nu există niciun astfel de cuvânt, se afișează pe ecran mesajul nu exista. Se
consideră vocale literele din mulțimea a, e, i, o, u.
Exemplu: pentru textul: a plantat cinci lalele visinii sau rosii
se afișează pe ecran, nu neapărat în această ordine, cuvintele alăturate.
a
plantat
cinci
visinii
*/
#include<iostream>
#include<string.h>
using namespace std;
int main() {
    char s[256];
    char v[] = "aeiou";
    char voc;
    char *c;
    int afiseaza;
    int nu_exista = 1;
    cout << "tastati cuvintele: ";
    cin.get(s, 255);
    c = strtok(s, " ");
    while(c != '\0') {
        voc = '\0';
        afiseaza = 1;
        for(int i = 0; i < strlen(c); i++) {
            if(strchr(v, c[i]) != NULL) {
                if(voc == '\0') {
                    voc = c[i];
                } else if(voc != c[i]) {
                    //cout << c[i];
                    afiseaza = 0;
                }
            }
        }
        if(afiseaza == 1) {
            cout << c << endl;
            nu_exista = 0;
        }
        //cout << endl;
        c = strtok('\0', " ");
    }
    if(nu_exista == 1) {
        cout << "nu exista";
    }
    return 0;
}
