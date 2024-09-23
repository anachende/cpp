#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n, m, i, j, contor;
    int tablou[24][24];
    cout << "Tastati m (intre 1 si 24): ";
    cin >> m;
    cout << "Tastati n (intre 1 si 24): ";
    cin >> n;

    //Umplere matrice
    contor = m*n;
    for(i = 1; i <= m; i++) {
        for(j = 1; j <= n; j++) {
            tablou[i][j] = contor;
            contor = contor - 1;
        }
    }

    //Afisare matrice
    for(i = 1; i <= m; i++) {
        for(j = 1; j <= n; j++) {
            cout << setw(3) << tablou[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
