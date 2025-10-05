#include<iostream>
using namespace std;
int main() {
    int d, n;
    int nr_div = 0;
    cin >> n;
    for(d = 2; d <= n/2; d++) {
        if(n%d==0) {
            cout << d;
            nr_div++;
        }
    }
    cout << endl << nr_div;
    return 0;
}
