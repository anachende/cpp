/*
Un cuvânt este prefix al unui alt cuvânt dacă se obține din acesta, prin eliminarea ultimelor sale litere.
Scrieți un program C/C++ care citește de la tastatură un număr natural n (n[2,20]) și apoi n cuvinte
distincte, fiecare fiind format din cel mult 20 de caractere, numai litere mici ale alfabetului englez.
La introducerea datelor, după fiecare cuvânt se tastează Enter. Programul afișează pe
ecran, separate prin câte un spațiu, cuvintele care îl au drept prefix pe ultimul cuvânt citit.
Dacă nu există astfel de cuvinte, se afișează pe ecran mesajul nu exista.
Exemplu: dacă n=6 și se citesc cuvintele alăturate, pe ecran se afișează
raita raid raion 
raita
grai
raid
raion
straie
rai

*/

#include <iostream>
#include<string.h>
using namespace std;
int main() {
    char cuv[20][21];
    int i;
    int contor = 0;
    int n = 6;
    cout << "dati nr cuv. n  =  ";
    cin >> n;
    //int contor = 0;
    //bucla de citire cuv
    for(i = 1; i <= n; i++) {
        //cout << "tastati cuv: " << i;
        //cout << i << " ";
        cin >> cuv[i];
    }
    //DEBUG - mesaje ajutatoare
    //afisarea tuturor cuv citite
    for(i = 1; i <= n; i++) {
        cout << cuv[i] << " ";
    }
    cout << endl;
    //afisarea ultimului cuvant
    cout << "ultimul cuv este: " << cuv[n] << endl;
    //-------------------

    for(i = 1; i < n; i++) {
        //cout << i << " cuv: " << cuv[i] << ", rez strstr: " << strstr(cuv[i], cuv[n]) << endl;

        if(strstr(cuv[i], cuv[n]) == cuv[i]) {
            //cout << "OK prefix" << i << " - " << cuv[i];
            cout << cuv[i] << " ";
            contor++;
        }
    }
    if(contor == 0) {
        cout << "Nu exista" << endl;
    }
    return 0;
}
