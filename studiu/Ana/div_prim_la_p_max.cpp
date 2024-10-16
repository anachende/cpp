/*Subprogramul putere are trei parametri:
• n, prin care primește un număr natural din intervalul [1,109];
• d și p, prin care furnizează divizorul prim, d, care apare la cea mai mare putere, p,
în descompunerea în
factori primi a lui n; dacă există mai mulți astfel de divizori se afișează cel mai mare
dintre ei.
Scrieți definiția completă a subprogramului.
Exemplu: dacă n=10780, atunci, în urma apelului, d=7 şi p=2 (10780=2^2*5^1*7^2*11^1)
*/

#include <iostream>
using namespace std;

//trebuie sa gasim divizorul prim la puterea cea mai mare
//voi furniza divizoul care are puterrea cea mai impare switch
//si aceasta putere
void putere(long long n, int &d, int &p) {
    int divizor = 2;
    int putere = 0;

    d = 2;
    p = 0;

    while(n > 1) {
        while(n % divizor == 0) {
            putere++;
            n = n/divizor;
        }
        if(putere > 0) {
            cout << divizor << "^" << putere << " ";
            if(putere >= p) {
                p = putere;
                d = divizor;
            }
        }
        putere = 0;
        divizor = divizor+1;
    }
}

int main() {
    long long nr = 10780;
    int div;
    //ifstream fin("fisier.in")
    //ofstream fout("fisier.out")
    int pt;
    cout << "Divizorii primi pentru: " << nr << endl;
    putere(nr, div, pt);
    cout << endl;
    cout << "Divizorul cel mai mare la puterea cea mai mare: " << div << "^" << pt << endl;

    //fin.close();
    //fout.close();
    return 0;
}
