#include <iostream>
using namespace std;

int suma_divizori_nr(int nr) {
    int j = 0, i, nr_div;
    int suma = 0;
    for(i = 1; i <= nr/2; i++) {
        if(nr % i == 0) {
            suma = suma + i;
        }
    }

    suma = suma + nr;
    return suma;
}

int armonie(int x, int y) {
    int suma_div_x, suma_div_y;
    //int v_div_x[100], v_div_y[100];

    int ret;

    suma_div_x = suma_divizori_nr(x);
    suma_div_y = suma_divizori_nr(y);

    cout << "suma div x: " << suma_div_x << endl;
    cout << "suma div y: " << suma_div_y << endl;

    if(suma_div_x < suma_div_y) {
        if(suma_div_x < (x+y) && (x+y) < suma_div_y) {
            ret = 1;
        }
        else {
            ret = 0;
        }
    } else {
        if(suma_div_y < (x+y) && (x+y) < suma_div_x) {
            ret = 1;
        }
        else {
            ret = 0;
        }
    }

    return ret;
}

int main() {
    int x;
    int y;

    // exemple de numere care nu sunt in armonie
    //x = 11;
    //y = 9;

    //exemple de numere in armonie
    x = 8;
    y = 12;

    if(armonie(x, y) == 1){
        cout << "nr in armonie";
    } else {
        cout << "Nr NU sunt in armonie";
    }

    return 0;
}
