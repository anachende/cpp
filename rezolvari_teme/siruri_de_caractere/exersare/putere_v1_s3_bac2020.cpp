/*

Subprogramul putere are trei parametri:
• n, prin care primește un număr natural din intervalul [1,109];
• d și p, prin care furnizează divizorul prim, d, care apare la cea mai mare putere, p, în descompunerea în
factori primi a lui n; dacă există mai mulți astfel de divizori se afișează cel mai mare dintre ei.
Scrieți definiția completă a subprogramului.
Exemplu: dacă n=10780, atunci, în urma apelului, d=7 şi p=2 (10780=2^2x5x7^2x11).

*/

#include <iostream>
using namespace std;

void putere(int n, int &d, int &p) {
    int max_d = 0;
    int max_p = 0;

    //
    // Descompun in divizori primi
    //
    //parcurg divizorii. i - divizorul. Incep de la 2 pt ca
    //vreau sa iau doar divizorii proprii (diferiti de 1 si n)
    for (int i = 2; i <= n; i++) {
        //if (n % i == 0) {
            int putere = 0;
            //impart la divizor pana nu se mai imparte
            //astfel gasesc doar divizorii primi
            while (n % i == 0) {
                n /= i;
                putere++;
                cout << "--- divizor i = " << i << "; n = " << n << "; p = " << putere << endl;
            }
            if (putere > max_p) {
                max_p = putere;
                max_d = i;
                cout << "divizor if: " << max_d << " putere: " << max_p << endl;
            } else if (putere == max_p && i > max_d) {
                max_d = i;
                cout << "divizor else: " << max_d << " putere: " << max_p << endl;
            }
        //}
    }

    //
    // Tratez cazu in care numarul este prim
    //

    cout << "n = " << n << endl;
    if (n > 1) {  // daca are divizori proprii, ma astept ca n == 1
        /*
        if (1 > max_p) {
            max_d = n;
            max_p = 1;
        } else if (1 == max_p && n > max_d) {
            max_d = n;
        }
        */
        max_d = n;
        max_p = 1;
        cout << "divizor: " << max_d << " putere: " << max_p << endl;
    }
    //dau valori valorilor care vreau sa le 'furnizez' din functie in main
    d = max_d;
    p = max_p;
}
int main() {
    int n = 10780, d, p;
    putere(n, d, p);
    cout << "d = " << d << ", p = " << p << endl;
    return 0;
}
