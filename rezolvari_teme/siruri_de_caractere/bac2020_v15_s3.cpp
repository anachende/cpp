/*
Într-un text cu cel mult 100 de caractere, cuvintele sunt formate din litere mici ale alfabetului englez și
sunt separate prin câte un spațiu. Scrieți un program C/C++ care citește de la tastatură un text de tipul
menționat și afișează pe ecran numărul de cuvinte ale sale formate dintr-un număr egal de vocale și
consoane. Se consideră vocale literele din mulțimea a, e, i, o, u.
Exemplu: pentru textul
cuvantul consoane are un numar de patru vocale si patru consoane
se afișează pe ecran 6.
*/

#include <iostream>
#include<string.h>
using namespace std;
int main() {
    char text[100];
    char vocale[] = "aeiou";
    char *cuv;
    char c;
    int lungime_cuv;
    int i;
    int contor_vocale;
    int contor_consoane;
    int contor_cuv = 0;

    cin.get(text, 100, '\n');
    //cout << "textul tastat: " <<text << endl;
    cuv = strtok(text, " ");
    while(cuv != '\0') {
        lungime_cuv = strlen(cuv);
        contor_vocale = 0;
        contor_consoane = 0;
        for(i = 0; i < lungime_cuv; i++) {
            c = cuv[i];
            if(strchr(vocale, c) != NULL) {
                //cout << "vocala " << c << endl;
                contor_vocale++;
            } else {
                contor_consoane++;
            }
        }
        if(contor_vocale == contor_consoane) {
            contor_cuv++;
            //cout << cuv << endl;
        }
        cuv = strtok('\0', " ");
    }
    if(contor_cuv == 0) {
        cout << "nu exista";
    } else {
        cout << contor_cuv;
    }

    return 0;
}
