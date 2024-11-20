/*
 */

#include <iostream>
using namespace std;
void citire(int v[], int n) {
    if(n > 0) {
        citire(v, n - 1);
        cout << "v[" <<  n - 1 << "] = ";
        cin >> v[n - 1];
    }
}

void afisare(int v[], int m) {
    if(m > 0) {
        afisare(v, m - 1);
        cout << v[m - 1];
    }
}

int main() {
    int m = 3;
    int v[m];
    //citire recursiva
    citire(v, m);

    //afisare iterativa / secventiala
    for(int i = 0; i < m; i++) {
        cout << v[i];
    }
    cout << "afisare recursiva" << endl;
    afisare(v, m);
    return 0;

}
