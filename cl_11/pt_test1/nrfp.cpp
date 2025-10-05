#include<iostream>
using namespace std;
void nrfp(int n, int&m) {
    int max = 0;
    int i, p, aux, d, nr_div;
    for(i = 2; i <= n; i++) {
        aux = i;
        //cout << "Factori primi: ";
        d = 2;
        nr_div=0;
        while(aux > 1) { // gasire toti divizorii primi
            //cout << "aux = " << aux;
            p = 0;
            //d = 2;
            while(aux%d == 0) { // gasire putere divizor
                p++;
                aux = aux/d;
            }
            if(p > 0) {
                //cout << " " << d <<" ";
                nr_div++;
            }
            d++;
            //cout << "; d = " << d << endl;
        }

        //cout << ". Numar:" << i << " " <<"numar div = " << nr_div << endl;
        if(nr_div >= max) {
            max = nr_div;
            m = i;
        }
    }
    //m = 25;
}

int main() {
    int m;
    nrfp(100, m);
    cout << "m = " << m;
    return 0;
}
