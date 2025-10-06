#include<iostream>
#include<fstream>
using namespace std;
int main() {
    int penultim = 0, ultim = 0, x;
    ifstream f("bac.txt");
    while(f >> x) {
        if(x%2 == 1) {
            //cout << "x = " << x << endl;
            if(ultim == 0) {
                ultim = x;
            } else {
                penultim = ultim;
                ultim = x;
            }
        }
    }
    if(penultim == 0 && ultim == 0) {
        cout << "nu exista";
    } else {
        cout << penultim << " " << ultim;
    }
    return 0;
}
