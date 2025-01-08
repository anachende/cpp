/*
ntr-un text cu cel mult 102 caractere, cuvintele sunt formate din litere mici și mari ale alfabetului englez
și sunt separate prin câte un spațiu. Scrieți un program C/C++ care citește de la tastatură un text de
tipul precizat, pe care îl transformă, astfel încât fiecare cuvânt să aibă prima literă mare, și toate
celelalte litere mici. Textul obținut se afişează pe ecran.
Exemplu: dacă de la tastatură se introduce textul ABIA aSTept sa Merg lA scoala
se obține textul Abia Astept Sa Merg La Scoala
*/

#include <iostream>
#include<string.h>
using namespace std;
int main() {
    char text[100];
    char *cuv;
    int i;
    cin.get(text, 100, '\n');
    //cout << "textul tastat: " <<text << endl;
    cuv = strtok(text, " ");
    while(cuv != '\0') {
        //transformam prima litera in litera mare
        if(cuv[0] >= 'a' && cuv[0] <= 'z') {
            cuv[0] = cuv[0] - 32;
        }
        //transformam literele urmatore in litere mici
        for(i = 1; i < strlen(cuv); i++) {
            if(cuv[i] >= 'A' && cuv[i] <= 'Z') {
                cuv[i] = cuv[i] + 32;
            }
        }
        cout << cuv << " ";
        cuv = strtok('\0', " ");

    }

    return 0;
}
