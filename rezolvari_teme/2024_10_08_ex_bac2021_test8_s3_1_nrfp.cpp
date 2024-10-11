/*
Subprogramul nrfp are doi parametri:
• n, prin care primește un număr natural (n[2,105]);
• m, prin care furnizează numărul din intervalul închis [2,n] care are cei mai mulți factori primi; dacă
există mai multe numere cu această proprietate, subprogramul îl returnează pe cel mai mare dintre ele.
Scrieți definiția completă a subprogramului.
Exemplu: dacă n=100 atunci, în urma apelului, m=90.

  100 | 2
   50 | 2
   25 | 5
    5 | 5
    1 | = = aici ne oprim, numarul este 1

    si avem: 100 = 2^2 + 5^2

*/

#include <iostream>
using namespace std;

void nrfp(int n, int &m) {
    int i, j, aux;
    int nr_f_p;
    int nr_f_p_max = 0;
    int nr_cu_f_p_max = 0;

    for(i = 2; i <= n; i ++) {
        nr_f_p = 0; // initializare pentru fiecare numar
        aux = i;    // trebuie sa gasesc numarul de factori primi pentru fiecare numar i - numerele in intervalul [2, n]
        int divizor_p = 2;
        int putere_div_p = 0;
        while(aux > 1) {
            while(aux % divizor_p == 0) {
                aux = aux / divizor_p;
                putere_div_p++;
            }
            if(putere_div_p != 0) { // daca puterea_div_p este 0, inseamna ca nu se divide la divizorul prim incercat
                nr_f_p++;           // de ex, pt 100, se va incerca 3 dar puterea lui va ramane 0 pentru ca nu se imparte la 3
            }
            divizor_p++;      // crestem divizorul, va fi tot prim pentru ca am epuizat impartirile la 2, va fi 3, apoi 5 etc
            putere_div_p = 0; // poate se imparte sau nu la 3, de aceea puterea lui 3 incepe de la 0
                              // pentru 100, in exemplul de la inceput, nu avem 3, de aceea se verifica daca putere_div_p != 0
        }
        if(nr_f_p >= nr_f_p_max) {
            nr_f_p_max = nr_f_p;
            nr_cu_f_p_max = i;
        }
    }
    m = nr_cu_f_p_max;
}

int main() {
    int nr_fp;
    int n = 100;
    nrfp(n, nr_fp);
    cout << "Numarul cu cei mai multi factori primi din [2, " << n << "]: " << nr_fp;
    return 0;
}
