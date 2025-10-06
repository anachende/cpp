#include<iostream>
#include<fstream>
using namespace std;
int main() {
    int x;
    int nr1 = 0, nr2 = 0, nr3 = 0;
    int ok = 0;
    ifstream f("bac.in");
    while(f >> x) {
        if(x%100 == 20) {
            cout << x << endl;
            if(nr1 == 0) {
                nr1 = x;
            } else {
                if(x <= nr1) { // compar cu prima poz - nr1
                    nr3 = nr2;
                    nr2 = nr1;
                    nr1 = x;
                } else { // compar cu nr2
                    if(nr2 == 0) {
                        nr2 = x;
                    } else if(x <= nr2) {
                        nr3 = nr2;
                        nr2 = x;
                    } else if(x <= nr3) {
                        nr3 = x;
                    }
                }
            }

        }
    }
    cout << "nr1: " << nr1 << " nr2: " << nr2 << " nr3: " << nr3;
    return 0;
}
