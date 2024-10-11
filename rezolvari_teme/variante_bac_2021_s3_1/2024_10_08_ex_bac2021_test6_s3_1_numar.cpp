/*
Subprogramul numar are trei parametri:
• n și c, prin care primește câte un număr natural (n[0,109], c[0,9]);
• m, prin care furnizează numărul obținut din n, prin eliminarea din acesta a tuturor cifrelor egale cu c, sau
-1 dacă toate cifrele lui n sunt egale cu c. Cifrele nule nesemnificative sunt ignorate, ca în exemplu.
Scrieți definiția completă a subprogramului.
Exemplu: dacă n=50752 sau n=72 și c=5, după apel m=72, dacă n=500 și c=5, după apel m=0, iar
dacă n=55 și c=5, după apel m=-1.
*/


#include <iostream>
using namespace std;

void numar(int n, int c, int &m) {
    int u, uc;
    int nr_ogl = 0;
    int minus_1 = 1; // de returnat -1 daca toate cifrele sunt c

    while (n > 0) {
        uc = n % 10;
        n = n / 10;
        if(uc != c) {
            minus_1 = 0;
        }
        if (uc != c && uc != 0) {
            nr_ogl = nr_ogl*10 + uc;
        }
    }
    //exista si varianta de construire directa, cu puteri ale lui 10

    //ogllndim numarul pentru a-l obtine in forma directa

    if(minus_1 == 1) {
        m = -1;
    } else {
        while(nr_ogl > 0) {
            uc = nr_ogl % 10;
            nr_ogl = nr_ogl / 10;
            m = m *10 + uc;
        }
    }
}

int main() {
    int n = 50752;
    //n = 72;
    //n = 500;
    //n = 55;
    int c = 5;
    int nr_nou = 0;
    numar(n, c, nr_nou);
    cout << " numar initial: " << n << ", rezultat dupa eliminare: " << nr_nou;
    return 0;
}
