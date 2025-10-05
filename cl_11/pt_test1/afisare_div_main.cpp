#include<iostream>
using namespace std;
void div(int n, int& m) {
    int i;
    for(i = 2; i <= n; i++) {

    }
}

int main() {
    int m, n=30, i, d, nr_div;
    for(i = 2; i <= n; i++) { //parcurg nr si le gasesc divizorii
        cout << "nr: " <<i << ", divizori: ";
        nr_div = 0;
        for(d = 2; d <= i/2; d++) { //gasire divizori
            if(i%d == 0) {
                cout << d << ", ";
                nr_div++;
            }
        }
        cout << "nr div proprii: "<< nr_div << endl;
    }
    //div(n, m);
    //cout << m;
    return 0;
}
