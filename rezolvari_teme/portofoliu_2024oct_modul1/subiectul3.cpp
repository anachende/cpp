#include <iostream>
using namespace std;

int gaseste_cifre(int x, int c) {
    int contor = 0;
    int uc;
    while (x > 0){
        uc = x % 10;
        x = x / 10;
        //cout << "c = " << uc << endl;
        if (uc == c) {
            contor += 1;
        }
    }
    return contor;
}

int main() {
    int n, uc, cnt, c;
    int nr_ap_cifre = 0;
    int s = 0, aux;
    cout << "n = ";
    cin >> n;
    for (c = 0; c <= 9; c++) {
        cnt = gaseste_cifre(n, c);
        
        nr_ap_cifre = nr_ap_cifre * 10 + cnt;
    }
    cout << nr_ap_cifre << endl;

    // calculare suma cifre numar
    while (n > 0){
        uc = n % 10;
        n = n / 10;
        s = s + uc;
    }
    //cat timp suma nu este de o singura cifra, voi face suma cifrelor
    //pana cand suma devine o cifra
    while (s > 10) {
        aux = s;
        s = 0;
        while (aux > 0) {
            uc = aux % 10;
            aux = aux / 10;
            s = s + uc;
        }
    }
    cout << s;

    return 0;
}
