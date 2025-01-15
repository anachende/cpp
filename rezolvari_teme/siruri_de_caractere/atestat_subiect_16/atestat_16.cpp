#include <fstream>
#include <iostream>
#include <string.h>
using namespace std;
ifstream fin("atestat.in");
ofstream fout("atestat.out");
int cifra(char c) {
    if(c >= '0' && c <= '9') {
        return 1;
    } else {
        return 0;
    }
}
void numar(int &n, int cif) {
   n = n * 10 + cif;
}
int main() {
    int n, v[11] = {0}, cif;
    char c;
    //citire date din fisier si populare vector cu cifre
    while (! fin.eof()) {
        fin >> c;
        //cout << c << endl;

        if (cifra(c)) {
            //cout << c << endl;
            cif = c - '0';
            v[cif] = 1;
        }
    }
    int a = 0, b = 0;
    for (int i = 1; i <= 9; i += 2) {
        if (v[i] == 1)
            a = a * 10 + i;
    }
    for (int i = 8; i >= 0; i -= 2) {
        if (v[i] == 1) {
            b = b * 10 + i;
            a *= 10;
        }
    }
    fout << a + b;
    return 0;
}
