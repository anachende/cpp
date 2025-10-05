#include<iostream>
using namespace std;
void nrdp(int n, int &m) {
    int d, p, nr_div_p, aux, max;
    m = 0; //cel ami mare numar cu max de divizori primi din intervalul [2, n]
    max = 0;
    for(int i = 2; i <= n; i++) {
        d = 2;
        nr_div_p = 0;
        aux = i;
        cout << aux << ", divizori/factori primi: ";
        while(aux > 1) {
            p = 0;
            //cout << "n = " << n;
            while(aux%d == 0) {
                aux = aux/d;
                p++;
            }
            if(p >= 1) {
                cout << " " << d;
                nr_div_p++;
            }
            d++;
        }
        cout << ", nr div primi: " << nr_div_p;
        if(nr_div_p >= max) {
            max = nr_div_p;
            m = i;
        }
        cout << endl;
    }
}
int main() {
    int m;
    nrdp(100, m);
    cout << endl << "nr max cu max de div primi: " << m;
    return 0;
}
