#include<iostream>
#include<fstream>
using namespace std;
int main() {
    ifstream fin("suma_maxdiv_prim.in");
    int n, x, suma=0, i, dvz, p, max_d_p;
    fin >> n;
    cout << n << endl;
    for(i = 1; i <= n; i++) {
        fin >> x;
        cout << x << ": ";
        dvz = 2;
        p = 0;
        while(x > 1) {
            while(x%dvz == 0) {
                p++;
                x = x/dvz;
            }
            if(p > 0) {
                //cout << dvz << " ";
                max_d_p = dvz;
            }
            dvz++;
            p = 0;
        }
        cout << max_d_p;
        suma = suma + max_d_p;
        cout << endl;
    }
    cout << "suma maximului divizorului prim = " << suma;
    return 0;
}
