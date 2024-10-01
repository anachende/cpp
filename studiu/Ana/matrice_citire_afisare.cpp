#include <iostream>
using namespace std;
int main(){
    int nr_lin, nr_col;
    int i, j;
    int tablou[20][20];
    nr_lin = 3;
    nr_col = 3;
    cout << "Dati elemente tabloului: " << endl;
    for (i = 1; i <= 3; i++){
        for (j = 1; j <= 3; j++){
            cout << "tablou[" << i << j << "] = ";
            cin >> tablou[i][j];
        }
    }
    //afisare matrive
    for( i = 1; i <= 3; i++) {
        for (j =1 ; j <= 3; j++) {
            cout << tablou[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
