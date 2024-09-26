#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int cifreImpare(int x) {
    int uc;
    int ret = 1;
    while (x > 0){
        uc = x % 10;
        x = x / 10;

        if(uc%2 == 1) {
            //cout << "   " << uc << " Impar" << endl;
        } else {
            ret = 0;
        }
    }
    return ret;
}

int afisare_tablou(int n, int t[20][20]) {
    int i, j;
    for(i = 1; i <= n; i++) {     //linii
        for(j = 1; j <= n; j++) { //coloane
            cout << setw(6) << t[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n, i, j;
    int a[20][20];
    int nr_el_c_imp = 0;
    int gasit = 0;

    //ifstream fin("atestat1.in");
    ifstream fin("atestat2.in");
    ofstream fout("atestat.out");

    //citire dimensiune tablou din fisier
    fin >> n;
    cout << "n = " << n << endl;

    //citire tablou din fisier
    for(i = 1; i <= n; i++) {     //linii
        for(j = 1; j <= n; j++) { //coloane
            fin >> a[i][j];
        }
    }

    cout << "Tablou citit din fisier:" << endl;
    afisare_tablou(n, a);

    //verific daca coloana x are x elemente cu toate cifrele cifre impare
    for(j = 1; j<=n && gasit == 0; j++) {
        nr_el_c_imp = 0;
        for(i = 1; i <= n; i++) {
            if(cifreImpare(a[i][j]) == 1) {
                nr_el_c_imp = nr_el_c_imp + 1; //echivalent cu += 1
            }
        }
        if(nr_el_c_imp == j) {
            cout << "Coloana de eliminat: " << j << endl;
            gasit = 1;
            //break;
        } else {
            nr_el_c_imp = 0;
        }
    }

    //adaugare in fisierul de iesire:
    if(nr_el_c_imp != 0) {
        for(i = 1; i <= n; i++) {
            for(j = 1; j<=n; j++) {
                if(j != nr_el_c_imp) {
                    fout << a[i][j] << " ";
                    cout << setw(6) << a[i][j] << " ";
                }
            }
            cout << endl;
            fout << endl;
        }
    } else {
        fout << "matrice nemodificata";
        cout << "matrice nemodificata";
    }

    fin.close();
    fout.close();
    return 0;
}
