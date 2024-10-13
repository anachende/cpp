#include<iostream>
using namespace std;
//1)
void afisare_cifre(int nr) {
    int uc;
    while(nr > 0) {
        uc = nr % 10;
        nr = nr / 10;
        cout << uc << endl;
    }
}

//2)
int cifre_pare(int nr) {
    int uc;
    int ret = 0;
    while(nr > 0) {
        uc = nr % 10;
        nr = nr / 10;
        if(uc % 2 == 0) {
            cout << uc  << endl;
            ret = 1;
        }
    }
    return ret;
}

//3)
int numar_cifre_pare(int nr) {
    int uc;
    int contor = 0;
    while(nr > 0) {
        uc = nr % 10;
        nr = nr / 10;
        if(uc % 2 == 0) {
            //cout << uc  << endl;
            contor += 1;
        }
    }
    return contor;
}

//4)
int cifre_imp(int nr) {
    int uc;
    int ret = 0;
    while(nr > 0) {
        uc = nr % 10;
        nr = nr / 10;
        if(uc % 2 == 1) {
            cout << uc  << endl;
            ret = 1;
        }
    }
}

//5)
int toate_impare(int nr) {
    int uc;
    int toate_imp = 1;
    while(nr > 0 && toate_imp == 1) {
        uc = nr % 10;
        nr = nr / 10;
        if(uc % 2 == 0) {
            //cout << uc  << endl;
            toate_imp = 0;
        }
    }
    return toate_imp;
}

//6)
int cifra_max(int nr) {
    int uc;
    int max = 0;
    while(nr > 0) {
        uc = nr % 10;
        nr = nr / 10;
        if(uc > max) {
            //cout << uc  << endl;
            max = uc;
        }
    }
    return max;
}

//7)
void cifra_min(int nr, int &min) {
    int uc;
    min = 9;
    while(nr > 0) {
        uc = nr % 10;
        nr = nr / 10;
        if(uc < min) {
            //cout << uc  << endl;
            min = uc;
        }
    }
}

//8)
int cifra_max_imp(int nr) {
    int uc;
    int max = 0;
    while(nr > 0) {
        uc = nr % 10;
        nr = nr / 10;
        if(uc % 2 == 1 && uc > max) {
            //cout << uc  << endl;
            max = uc;
        }
    }
    return max;
}

//9)
void cifra_min_imp(int nr, int &min) {
    int uc;
    min = 9;
    while(nr > 0) {
        uc = nr % 10;
        nr = nr / 10;
        if(uc % 2 == 1 && uc < min) {
            //cout << uc  << endl;
            min = uc;
        }
    }
}

//10)
int cifra_min_par(int nr) {
    int uc;
    int min = 9 ;
    while(nr > 0) {
        uc = nr % 10;
        nr = nr / 10;
        if(uc % 2 == 0 && uc < min) {
            //cout << uc  << endl;
            min = uc;
        }
    }
    return min;
}

int main() {
    int n = 12345;
    //n = 13579;
    //n = 2468;
    int minim;
    int min_imp;
    cout << "cifrele din numar sunt: " << endl;
    afisare_cifre(n);
    cout << "cifrele pare sunt: " << endl;
    if(cifre_pare(n) == 0) {
        cout << "nu sunt cifre pare" << endl;
    }
    cout << "nr cifre pare: " << numar_cifre_pare(n) << endl;
    cout << "cifrele impare sunt: " << endl;
    if(cifre_imp(n) == 1) {
        cout << "nu sunt cifre impare" << endl;
    }
    cout << "toate cifrele sunt impare: " << toate_impare(n) << endl;
    cout << "nr max: " << cifra_max(n) << endl;

    cifra_min(n, minim);
    cout << "cifra minima este: " << minim << endl;

    cout << "cifra maxima impara: " << cifra_max_imp(n) << endl;

    cifra_min_imp(n, min_imp);
    cout << "cifra minima impara: " << min_imp << endl;

    cout << "cifra minima para: " << cifra_min_par(n) << endl;
    return 0;
}
