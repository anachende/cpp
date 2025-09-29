#include<iostream>
using namespace std;
int main(){
    int n, f = 2;
    cout << "n = ";
    cin >> n;
    cout << "divizori sunt: ";
    //1 este divizor il afisam
    cout << 1 <<" ";
    for(f = 2; f <= n/2; f++) {
        if(n%f == 0) {
            cout << f << " ";
        }
    }
    cout << n << endl;
    cout << "determinare divPrimi" << endl;
    f = 2;
    while(n > 1) {
        int p = 0;
        while(n%f == 0) {
            n = n/f;
            p++;
        }
        if(p >= 1) {
            cout << f << "^" << p << " ";
        }
        f++;
    }

    return 0;
}
