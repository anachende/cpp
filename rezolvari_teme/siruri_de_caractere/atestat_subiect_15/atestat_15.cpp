#include <fstream>
#include <iostream>
#include <string.h>
using namespace std;

ifstream fin("atestat.in");
ofstream fout("atestat.out");

//Citest cuvintele din fisier si le pun in sir separate prin spatii
bool verifica(char sir[]) {
    char vocale[] = "aeiou";
    char c;
    int poz_anterioara = -10;
    int i = 0;
    bool ret = 0;

    while(sir[i] != '\0' && ret == 0) { //parcurg sirul cu while - pana ajung la \0
        if(sir[i] != ' ' && strchr(vocale, sir[i]) == NULL) {
            //cout << sir[i] << endl;
            //consoana dar nu spatiu
            if(i == poz_anterioara + 1) {
                ret = 1;
            }
            poz_anterioara = i;
        }
        i++;
    }
    return ret;
}

//Decodific caracterele - cifrele de la 0 la 4 - vocale,
//Pentru consoane - adaug 1.
int nrvoc(char sir[]) {
    char vocale[] = "aeiou";
    int i = 0;
    int nr_vocale = 0;
    char c;

    c = sir[0];
    while(sir[i] != '\0') { //parcurg sirul cu while - pana ajung la \0
        if(strchr(vocale, sir[i]) != NULL)
            nr_vocale++;
        i++;
    }
    return nr_vocale;
}
int main() {
    char cuvant[20] = "";
    //citire cuvinte din fisier in sir
    fin >> cuvant;
    while(!fin.eof()) {
        if(verifica(cuvant) && nrvoc(cuvant) >= 3) {
            cout << cuvant << endl;
        }
        fin >> cuvant;
    }
    fin.close();
    fout.close();
    return 0;
}
