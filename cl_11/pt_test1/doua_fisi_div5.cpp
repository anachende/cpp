#include<iostream>
#include<fstream>
using namespace std;
int main() {
    int nr1, nr2, i;
    int nrf1, nrf2;
    ifstream f1("bac1.txt");
    ifstream f2("bac2.txt");

    f1 >> nr1;
    f2 >> nr2;

    //citire numere din ambele fisiere
    cout << "numere din f1: ";
    while(f1 >> nrf1) {
        cout << nrf1 << " ";
    }
    cout << endl;
    cout << "numere din f2: ";
    while(f2 >> nrf2) {
        cout << nrf2 << " ";
    }
    
    return 0;
}
