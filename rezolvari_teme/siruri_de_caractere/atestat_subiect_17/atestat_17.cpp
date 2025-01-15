#include <fstream>
#include <iostream>
#include <string.h>
using namespace std;

ifstream fin("atestat.in");
ofstream fout("atestat.out");

//Citest cuvintele din fisier si le pun in sir separate prin spatii
void construieste(char sir[]) {
    char cuvant[200] = "";
    int l_sir;
    fin >> cuvant;
    while(!fin.eof()) {
        l_sir = strlen(sir);
        strcpy(&sir[l_sir], cuvant);
        l_sir = strlen(sir);
        strcpy(&sir[l_sir], " ");
        fin >> cuvant;
    }
}

//Decodific caracterele - cifrele de la 0 la 4 - vocale,
//Pentru consoane - adaug 1.
void decodifica(char sir[]) {
    for(int i = 0; i < strlen(sir); i++) {
        if(sir[i] == '0') {
            sir[i] = 'a';
        } else if(sir[i] == '1') {
            sir[i] = 'e';
        } else if(sir[i] == '2') {
            sir[i] = 'i';
        } else if(sir[i] == '3') {
            sir[i] = 'o';
        } else if(sir[i] == '4') {
            sir[i] = 'u';
        } else if(sir[i] >= 'a') {
            sir[i] = sir[i] + 1;
        }
    }
}
int main() {
    char sir[200] = "";
    //citire cuvinte din fisier in sir
    construieste(sir);
    fout << sir << endl; // adaugare in fisier
    cout << sir << endl; // afisare si pe ecran

    decodifica(sir);
    fout << sir << endl;
    cout << sir << endl;

    fin.close();
    fout.close();
    return 0;
}
