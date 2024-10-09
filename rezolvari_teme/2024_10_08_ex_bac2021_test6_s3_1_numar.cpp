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

int numar(int n, int c, int & m) {
    int u, uc;
    int nr_nou = 0;
    int nr;
    while (nr > 0) {
        uc = nr % 10;
        nr = nr / 10;
        if (uc != c && uc != 0) {
            nr_nou = nr_nou*10 + uc;
        }
    }

}

int main() {
    int n = 50752;
    cout << n << " numar: " << numar(n, c, m);
    return 0;
}
