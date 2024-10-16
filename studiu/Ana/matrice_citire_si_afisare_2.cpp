#include <iostream>
using namespace std;

int main() {
    int tablou[20][20];
    int val;
    int lin = 4;
    int col = 2;
    int i, j;
    val = lin*col;
    // populare matrice
    for(i = 1; i <= lin; i++ ) {
        for(j = 1; j <= col; j++) {
            tablou[i][j] = val;
            val--;
        }
    }
    //afisare matrice
    for(i = 1; i <= lin; i++ ) {
        for(j = 1; j <= col; j++) {
            cout << tablou[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
