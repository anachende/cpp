//https://www.pbinfo.ro/probleme/2305/numere21
/*
Se citesc perechi de numere naturale până la citirea a două valori nule. Să se calculeze suma numerelor din perechile pentru care atât valorile inițiale cât și oglinditele lor sunt prime între ele.

Date de intrare
Programul citește de la tastatură perechi de numere naturale. Citirea se încheie la introducerea a două valori nule.

Date de ieșire
Programul va afișa pe ecran numărul C, reprezentând valoarea cerută.

Restricții și precizări
se vor citi cel mult 40 de perechi de numere;
toate numerele citite vor fi mai mici decât 1.000.000;
toate numerele citite sunt nenule, cu excepția ultimelor două;
Exemplu:
Intrare

14 516
14 416
13 13
123 321
156 2651
456 674
0 0
Ieșire

2807
Explicație
Singura pereche care respectă regula este 156 2651.
*/



#include <iostream>
using namespace std;

int oglindit(int n) {
    int ogl = 0, uc;
    while(n > 0) {
        uc = n % 10;
        n = n/10;
        ogl = ogl*10 + uc;
    }
    return ogl;
}

int verifica_prime(int n1, int n2) {
    int d, sunt_prime;
    int c = 0;
    d = 2;
    sunt_prime = 1;
    while( d <= n1/2) {
        if(n1%d == 0) {
            if(n2%d == 0) {
                d = n1/2;
                sunt_prime = 0;
            }
        }
        d++;
    }
    if(n1%n2 == 0 || n2%n1 == 0) sunt_prime = 0;

    if(sunt_prime == 1) {
        c = n1 + n2;
    }
    return c;
}
int main(){
    int n1, n2, c = 0, cog;
    while(n1 != 0 || n2 != 0) {
        cout << "n1 = ";
        cin >> n1;
        cout << "n2 = ";
        cin >> n2;
        if(n1 != 0 && n2 != 0) {
            c = verifica_prime(n1, n2);
            if(c != 0) {
                cog = verifica_prime(oglindit(n1), oglindit(n2));
                if(cog != 0) {
                    cout << c << endl;
                }
            }
        }
    }
    return 0;
}
