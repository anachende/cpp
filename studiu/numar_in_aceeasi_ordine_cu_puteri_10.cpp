#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int nr = 1236;
    int uc;
    int p = 0;

    int o = 0;
    int d = 0;

    //cout << pow(10, 3);

    while(nr > 0) {
        uc = nr % 10;
        nr = nr / 10;

        o = o * 10 + uc;

        cout << "d initial:   " << d << endl;
        cout << "uc*10 la p:  " << uc*pow(10, p) << endl;
        d = d + uc*pow(10, p);
        cout << " d calculat: " << d << endl;
        p++;
    }

    cout << "Oglindit: " << o << endl;
    cout << "Direct:   " << d << endl;

    return 0;
}
