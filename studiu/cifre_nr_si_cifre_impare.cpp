#include <iostream>
#include <iomanip>
using namespace std;

int afisare_cifre(int x) {
    int uc;
    while (x > 0) {
        uc = x % 10;
        x = x / 10;
        cout << uc << endl;
    }
    return 0;
}

int cifreImpare(int x) {
    int uc;
    int ret = 1;
    while (x > 0){
        uc = x % 10;
        x = x / 10;

        if(uc%2 == 1) {
            cout << uc << " Impar" << endl;
        } else {
            ret = 0;
        }
    }
    return ret;
}

int main() {
    int x;
    cout << "Tastati numarul:  ";
    cin >> x;
    //afisare_cifre(x);
    cout << cifreImpare(x);
    return 0;
}
