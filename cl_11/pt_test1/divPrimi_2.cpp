#include<iostream>
using namespace std;
int main() {
    int n, d, p;
    cout << "n = ";
    cin >> n;
    d = 2;
    cout << "divizori/factori primi: ";
    while(n > 1) {
        p = 0;
        //cout << "n = " << n;
        while(n%d == 0) {
            n = n/d;
            p++;
        }
        if(p >= 1) {
            cout << " " << d;
        }
        d++;
    }
    return 0;
}
