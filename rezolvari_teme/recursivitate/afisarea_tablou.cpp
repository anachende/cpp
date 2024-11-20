/*
  Afisare recursiva vector.
  Daca in if in functia de afisare pun cout inainte de autoapel se afiseaza
  vectorul oglindit.

  Daca pun cout-ul dupa autoapel - se afiseaza in ordine de la poz 0 la ultima poz.
*/

#include <iostream>
using namespace std;

void afisare(int v[], int m) {
    cout << "  apel afisare. m = " << m << endl;
    if(m > 0) {
        afisare(v, m - 1);
        cout << "   - afisez in if. m = " << m << endl;
        cout << v[m] << endl;
    } else {
        cout << "   - else, m = " << m << endl;
        cout << v[m] << endl;
    }
}

int main() {
    int n = 3;
    //pozitii   0  1  2
    int v[n] = {1, 2, 3};
    afisare(v, n-1);
    return 0;
}
