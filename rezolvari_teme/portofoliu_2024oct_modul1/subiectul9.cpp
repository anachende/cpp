#include <iostream>
#include <fstream>
using namespace std;

int oglinda(int numar) {
    //construim oglinditul luand cifra cu cifra numerele de la sfarsit spre inceput
    int oglindit = 0;
    int uc;
    while(numar != 0) {
        uc = numar % 10;
        oglindit = oglindit*10 + uc;
        numar = numar/10;
    }
    return oglindit;
}

int main() {
    int a, b, i, k;
    ofstream fout("palindrom.out"); // fout - variabila asociata cu fisierul palindrom.out

    cout << "dati primul numar:    a = ";
    cin >> a;
    cout << "dati al doilea numar: b = ";
    cin >> b;
    cout << "palindroame in intervalul [" << a << ", " << b << "]" << endl;
    for(i = a; i <= b; i++) {
        if(i == oglinda(i)) {
            cout << i << " ";
            fout << i << " ";
        }
    }
    fout << endl;

    cout << endl << "dati numarul k: ";
    cin >> k;

    if(oglinda(k) == k) {
        cout << "palindrom";
        fout << "palindrom";
    } else {
        k++;
        while(oglinda(k) != k) {
            k++;                 // il tot maresc pe k pana am un palindrom
        }
        cout << k;
        fout << k;
    }

    fout.close(); //inchidem fisierul
    return 0;
}
