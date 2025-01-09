/*
Într-un text cu cel mult 102 caractere, cuvintele sunt formate din litere mici ale alfabetului englez și sunt
separate prin câte un spațiu. Scrieți un program C/C++ care citește de la tastatură un text de tipul
precizat, pe care îl transformă în memorie, eliminând numai ultima vocală care apare în text, ca în
exemplu. Programul afișează pe ecran textul obținut sau mesajul nu exista, dacă în text nu există
nicio vocală. Se consideră vocale literele a, e, i, o, u.
Exemplu: dacă se citește textul: cuvantul ritm poate fi tradus rhythm
se obține textul cuvantul ritm poate fi trads rhythm
*/

#include <iostream>
#include<string.h>
using namespace std;
int main() {
    char text[100];
    char vocale[] = "aeiou";
    int i, contor = 0, gasit_vocala = 0;

    cin.get(text, 100, '\n');

    i = strlen(text) - 1;
    while(gasit_vocala == 0) {
        if(strchr(vocale, text[i]) != NULL) {
            gasit_vocala = 1;
            contor = 1;
            cout << "pozitia: " << i << ", vocala: " << text[i] << endl;
        } else {
            i--;
        }
    }

    strcpy(&text[i], &text[i+1]);

    if(contor == 0) {
        cout << "nu exista";
    } else {
        cout << text;
    }
    //cout << "SALUT" << endl;

    return 0;
}
