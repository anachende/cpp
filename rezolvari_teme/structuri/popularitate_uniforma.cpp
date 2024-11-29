#include<iostream>
#include <fstream>
using namespace std;

struct elevi_uniforma {
    int nr_elevi;
    int nr_uniforma;
};

int main() {
    elevi_uniforma gr;
    int frecv_uniforma[12];
    for(int i = 0; i < 11; i++) {
        frecv_uniforma[i] = 0;
    }

    ifstream fin("serbare.in");
    ofstream fout("serbare.out");
    int n;
    int p;

    fin >> n >> p;
    cout << n << " " << p << endl;

    //citire din fisier a numarului de elevi si nr uniformei purtate pe fiecare grupa
    for(int i = 1; i <= n; i++) {
        fin >> gr.nr_elevi;
        fin >> gr.nr_uniforma;
        frecv_uniforma[gr.nr_uniforma] += gr.nr_elevi;

        cout << gr.nr_elevi << " " << gr.nr_uniforma << endl;
    }

    //afisare vector frecventa
    // pozitia i                 - uniforma purtata
    //         frecv_uniforma[i] - cati elevi o poarta
    // se face o suma adun numarul elevilor din grupele care poarta aceeasi
    // uniforma
    for(int i = 1; i <= p; i++) {
        cout << "uniforma: " << i << " nr elevi: " <<  frecv_uniforma[i] << endl;
    }

    //De facut
    //Am nevoie de inca un vector identic cu vectorul de frecventa - vf2
    //aici voi copia initial vectorul de frecventa
    //sortez vf2 descrescator - sa am frecventa de purare a uniformelor ordonata
    //iau elementele din vectorul de frecventa - de la cel mai mare (poz 0)
    //si compar valorile cu ce am in vectorul initial frecv_uniforma
    //afisez pozitia daca am egalitate de valorile
    /*
        pentru fisierul de intrare dat, voi avea:
        frecv_uniforma = {0, 30, 50, 20} adica:
             - 30 elevi cu uniforma 1
             - 50 elevi cu uniforma 2
             - 20 elevi cu uniforma 3
        (la popularea vectorului incepem de la 1
         poz 0 are val 0 dar nu o luam in seama)

         dupa ordonare: vf2 = {0 50, 30, 20} - din nou, ordonez intre 1 si p (nr de uniforme)

         parcurg vf2 de la 1 si afisea pozitiile din frecv_uniforma unde gasesc valoarea
         50 din vf2 se gaseste pe pozitia 2 in frecventa_uniforma -> afisez 2
         30 din vf2 se gaseste pe pozitia 1 in frecventa_uniforma -> afisez 1
         20 din vf2 se gaseste pe pozitia 3 in frecventa_uniforma -> afisez 3

         programul va afisa:
         2 1 3

         adica numarul uniformei in ordinea descrescatoare a popularitatii (adica cati copii o poarta)

    */

    fin.close();
    fout.close();
    return 0;
}
