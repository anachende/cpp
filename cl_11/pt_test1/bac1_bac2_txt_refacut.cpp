#include<iostream>
#include<fstream>
using namespace std;
int main() {
    ifstream f1("bac1.txt");
    ifstream f2("bac2.txt");
    int x1, x2, n1, n2, i1=1, i2=1;
    f1 >> n1 >> x1; // am citit deja primul element; au ramas n1-1 in f1
    f2 >> n2 >> x2;
    //cout << n1 << " " << n2 << endl;
    //cout << x1 << " " << x2 << endl;
    while(i1 < n1 && i2 < n2) {
        if(x1 == x2) {
            //cout << "x1:" << x1 << " x2:" << x2<< endl;
            f1 >> x1;
            f2 >> x2;
            i1++;
            i2++;
        } else if(x1 < x2) {
            //cout << "x1:" << x1 << endl;
            if(x1%5 == 0) cout << x1 << " ";
            f1 >> x1;
            i1++;
        } else if(x2 < x1) {
            //cout << "x2:" << x2 << endl;
            if(x2%5 == 0) cout << x2 << " ";
            f2 >> x2;
            i2++;
        }
    }

    //cout << endl;
    //cout << "i1: " << i1 << endl;
    //cout << "i2: " << i2 << endl;

    //cout << endl << "elementele in plus in f1: ";
    while(i1 <= n1) {
        f1 >> x1;
        i1++;
        if(x1%5 == 0) cout << x1 << " ";
    }

    //cout << endl;
    //cout << "elementele in plus in f2: ";
    while(i2 <= n2) {
        f2 >> x2;
        i2++;
        if(x2%5 == 0) cout << x2 << " ";
    }


    return 0;
}
