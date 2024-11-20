#include <iostream>
using namespace std;
void cifre_nr(int n) {
    int uca = -1;
    int uc;
    int cmp_cifra;
    int tip_nr = 3; //2 = neordonat; 0 = egale; 1 = crescator; -1 = descrescator
                    // pentru oglindit - citesc cifrele de la coada
    while(n > 0 && tip_nr != 2) {
        uc = n % 10;
        n = n / 10;
        if(uca == -1) {
            uca = uc;
        } else {
            if(uc > uca) {
                cmp_cifra = 1;
            } else if(uc == uca) {
                cmp_cifra = 0;
            } else {
                cmp_cifra = -1;
            }
            //cout << uca << " " << uc << " " << cmp_cifra << " ";
            uca = uc;

            if(tip_nr == 3) {
                tip_nr = cmp_cifra;
            } else {
                //cout << "====" << tip_nr << " " << cmp_cifra << "=== ";
                if(tip_nr != cmp_cifra) {
                    tip_nr = 2;
                }
            }
            //cout << tip_nr << endl;
        }
    }

    if(tip_nr == 1) {
        cout << "strict descrescator" << endl;
    } else if(tip_nr == -1) {
        cout << "strict crescator" << endl;
    } else if(tip_nr == 0) {
        cout << "egale" << endl;
    } else {
        cout << "neordonat";
    }
}

int main() {
    int nr;
    cin >> nr;
    cifre_nr(nr);
    return 0;
}
