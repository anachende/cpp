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

    /*
    Diagonala principala
    */
    cout << "afisare elmente diagonala principala" << endl;
    for(i = 1; i <= nr_lin; i++) {
        j = i;
        cout << tablou[i][j] << " ";
    }

    cout << endl;
    cout << "afisare elmente deasupra diagonala principala-v1" << endl;
    for(i = 1; i <= nr_lin; i++) {
        for(j = i+1; j <= nr_lin; j++) {
            cout << "*";
            cout << tablou[i][j] << " ";
        }
    }
    cout << endl;
    cout << "afisare elmente deasupra diagonala principala-v2" << endl;
    for(i = 1; i <= nr_lin; i++) {
        for(j = 1; j <= nr_lin; j++) {
            cout << "*";
            if(j > i) {
                cout << tablou[i][j] << " ";
            }
        }
    }
    cout << endl;
    cout << "afisare elmente dedesuptul diagonala principala-v1" << endl;
    for(i = 2; i <= nr_lin; i++) {
        for(j = 1; j < i; j++) {
            cout << "*";
            cout << tablou[i][j] << " ";
        }
    }
    cout << endl;
    cout << "afisare elmente dedesuptu diagonala principala-v2" << endl;
    for(i = 1; i <= nr_lin; i++) {
        for(j = 1; j <= nr_lin; j++) {
            cout << "*";
            if(j < i) {
                cout << tablou[i][j] << " ";
            }
        }
    }
    cout << endl;
    /*
    Diagonala secundara
    */
    cout << "afisare elmente diagonala secundarea" << endl;
    for(i = 1; i <= 3; i++) {
        j = nr_lin-i+1;
        cout << tablou[i][j] << " ";
    }
    cout << endl;

    cout << "elemente de deasupra diagonalei secundare" << endl;
    for(i = 1; i <= nr_lin; i++) {
        for(j = 1; j <= nr_lin; j++) {
            if(j+i < nr_lin+1) {
                cout << tablou[i][j] << " ";
            }
        }
    }
    cout << endl;

    cout << "elemente de dedesupt diagonalei secundare" << endl;
    for(i = 1; i <= nr_lin; i++) {
        for(j = 1; j <= nr_lin; j++) {
            if(j+i > nr_lin+1) {
                cout << tablou[i][j] << " ";
            }
        }
    }
    cout << endl;

    //elemente dintre diagonale
    cout << "afisare elemente ora 9-sub DP deas. DS" << endl;
    for(i = 1; i <= nr_lin; i++) {
        for(j = 1; j <= nr_lin; j++) {
            if(i > j && i+j < nr_lin+1) {
                cout << tablou[i][j];
            }
        }
    }
    cout << endl;

    cout << "afisare elemente ora 6-sub DP sub DS" << endl;
    for(i = 1; i <= nr_lin; i++) {
        for(j = 1; j <= nr_lin; j++) {
            if(i > j && i+j > nr_lin+1) {
                cout << tablou[i][j];
            }
        }
    }
    cout << endl;



        cout << "afisare elemente ora 3-peste DP sub DS" << endl;
        for(i = 1; i <= nr_lin; i++) {
            for(j = 1; j <= nr_lin; j++) {
                if(i < j && i+j > nr_lin+1) {
                    cout << tablou[i][j];
                }
            }
        }
        cout << endl;


            cout << "afisare elemente ora 12-peste DP peste DS" << endl;
            for(i = 1; i <= nr_lin; i++) {
                for(j = 1; j <= nr_lin; j++) {
                    if(i < j && i+j < nr_lin+1) {
                        cout << tablou[i][j];
                    }
                }
            }
            cout << endl;

    return 0;
}
