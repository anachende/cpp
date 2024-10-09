#include <iostream>
#include <iomanip>
using namespace std;

int maxim(int n) {
    int uc;
    int max;

    max = n % 10;
    while (n > 0) {
        uc = n % 10;
        n = n / 10;
        if (uc > max){
            max = uc;
        }
        //cout << uc << endl;
    }
    return max;
}

int maxim_impare(int n) {
    int uc;
    int max;

    max = -1;
    while (n > 0) {
        uc = n % 10;
        n = n / 10;
        if (uc % 2 == 1) {
            if (uc > max){
                max = uc;
            }
        }

        //cout << uc << endl;
    }
    return max;
}

int min(int n) {
    int uc;
    int min;
    min = 9;
    while (n > 0) {
        uc = n % 10;
        n = n / 10;
        if (uc < min) {
            min = uc;
        }
    }
    return min;
}

int min_par(int n) {
    int uc;
    int min;
    min = 9;
    while(n > 0) {
        uc = n % 10;
        n = n / 10;
        if(uc % 2 == 0) {
            if(uc < min) {
                min = uc;
            }
        }
    }
    return min;
}

int main() {
    //int nr = 1234;
    //int m;
    //m = maxim(nr);
    cout << "min_par = " << min_par(1354328) << endl;
    cout << "min = " << min(7891456) << endl;
    cout << "max_imp = " << maxim_impare(12345678) << endl;
    cout << "max = " << maxim(1237656) << endl;
    //cout << "max = " << maxim(1287656) << endl;
    //cout << "max = " << maxim(12876796) << endl;
    return 0;
}
