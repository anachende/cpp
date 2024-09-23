#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n, i, j;
    int im, jm;
    int tablou[30][30];
    int min;
    int produs = 0;
    cout << "Tastati n (intre 1 si 30): ";
    cin >> n;

    //Umplere matric
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n; j++) {
            cout << "tablou[" << i << "][" << j << "] = ";
            cin >> tablou[i][j];
        }
    }

    //Afisare matrice
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n; j++) {
            cout << setw(2) << tablou[i][j] << " ";
        }
        cout << endl;
    }

    for(j = 1; j <= n; j++) {
        min = tablou[1][j];
        for(i = 1; i <= n; i++) {
            if(tablou[i][j] <= min) {
                min = tablou[i][j];
                im = i;
                jm = j;
            }
        }
        if(im == n - jm + 1) {
            cout << "Coloana: " << jm << ", Pe diagonala sec: " << min << endl;
            if(produs == 0) {
                produs = min;
            } else {
                produs = produs * min;
            }
        }
    }

    if(produs == 0) {
        cout << "NU EXISTA";
    } else {
        cout << produs % 10;
    }

    return 0;
}
