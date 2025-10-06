#include<iostream>
using namespace std;
void produs(long n, int &p) {
    int uc = 0;
    int aux;
    p = 1;
    for(int cif = 2; cif <= 8; cif = cif+2) {
        cout << "caut cifra:" << cif << endl;
        aux = n;
        while(aux > 0) { //caut cifra in numar
            uc = aux%10;
            aux = aux/10;
            if(uc == cif) {
                cout << "    gasit cifr para:" << uc << endl;
                p = p*cif;
                aux = 0;
            }
        }
    }
    if(p == 1) {
        p = -1;
    }
}

int main() {
    int p;
    long nr = 1622325;
    //nr = 122325;
    //nr =  4133354;
    produs(nr, p);
    cout << p;
    return 0;
}
