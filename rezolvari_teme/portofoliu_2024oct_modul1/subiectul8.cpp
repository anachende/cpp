#include <iostream>
#include <fstream>
using namespace std;

int nr_prim(int nr) {
    int este_prim = 1;
    int i;
    for(i = 2; i <= nr/2 && este_prim == 1; i++) {
        if(nr%i == 0) {
            este_prim = 0;
        }
    }

    return este_prim;
}

int cmmdc(int nr1, int nr2) {
    int rest;
    //cout << nr1 << ", " << nr2;
    while(nr2 != 0) {
        rest = nr1 % nr2;
        nr1 = nr2;
        nr2 = rest;
    }
    //cout << ", cmmdc = " << nr1 << endl;
    return nr1; //cand nr2 ajunge 0, nr1 va fi cmmdc
                //daca nr1 (cmmdc) este 1, numerele sunt prime intre ele
}

int main() {
    ifstream f("numere.in");
    int contor = 0;
    int a, b; //in a voi citi un un numar din fisier, in b numarul urmator
    f >> a;
    while(f >> b) { // cat timp am numere in fisier, cand nu mai sunt, se iese din bucla
        if(cmmdc(a, b) == 1 && nr_prim(a) == 0 && nr_prim(b) == 0) {
            cout << "nu sunt prime dar sunt prime intre ele: (" << a << "," << b << ")" << endl;
            contor++;
        }
        a = b; // a devine al doilea numar citit,
               // in while in b se va pune al treilea numar
    }
    cout << contor;
    f.close();
    return 0;
}
