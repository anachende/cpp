#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("cifre006.in");
ofstream fout("cifre006.out");
int main() {
    int n, k, c = 0, ck = 0, cn = 0, p = 1, uc;
    fin >> n >> k;
    while(n) {
        uc = n%10;
        if(uc == k) {
            c++;
            ck = ck*10 + uc;
        } else {
            cn = cn + uc*p;
            p = p*10;
        }
        n = n/10;
    }
    //cout << ck << " " << cn << " " <<p << endl;
    //cout << ck*p+cn << " ";
    //cout << c;
    fout << c << endl << ck*p+cn ;
    return 0;
}
