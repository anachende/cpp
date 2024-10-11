/*
Un joc online cu n jetoane poate fi jucat de un grup de k (k≥2) jucători, numai dacă toate cele n jetoane
pot fi distribuite în mod egal celor k jucători.
Subprogramul joc are un singur parametru, n, prin care primește un număr natural (n[2,104]),
reprezentând numărul de jetoane ale unui joc de tipul precizat. Subprogramul returnează numărul
valorilor distincte pe care le poate avea k pentru acest joc.
Scrieți definiția completă a subprogramului.
Exemplu: dacă n=12, atunci subprogramul returnează numărul 5 (cele 12 jetoane se pot distribui în
mod egal pentru o grupă de 2 jucători, de 3 jucători, de 4 jucători, de 6 jucători sau de 12 jucători).
*/


#include <iostream>
using namespace std;

int joc(int numar) {
    int v_dist_k = 0;
    int k;
    for (k = 2; k <= numar; k++) {
        if (numar % k == 0) {
            v_dist_k = v_dist_k + 1;
        }
    }
    return v_dist_k;
}

int main() {
    int n;
    n = 12;
    cout << "nr valori distincte = " << joc(n);
    return 0;
}
