#include<iostream>
using namespace std;
void div_proprii(int i, int &nr_div) {
    int d;
    cout << "nr: " <<i << ", divizori: ";
    nr_div = 0;
    for(d = 2; d <= i/2; d++) { //gasire divizori
        if(i%d == 0) {
            cout << d << ", ";
            nr_div++;
        }
    }
}

int main() {
    int n=30, nr_div;
    for(int i = 2; i <= n; i++) { //parcurg nr
        div_proprii(i, nr_div);   //gasesc divizorii pt fiecare nr
        cout << "nr div proprii: "<< nr_div << endl;
    }

    //div(n, m);
    //cout << m;
    return 0;
}
