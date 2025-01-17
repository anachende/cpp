#include <iostream>
#include <string.h>
using namespace std;
int main() {
    char cuv[100];
    int i;
    cin.get(cuv, 100, '\n');
    cout << "afisez litera de pe pozitia 4: " << cuv[4] << endl;
    cout << "ultima litera este: " << cuv[strlen(cuv) -1] << endl;
    cout << "penultima cifra este: " << cuv[strlen(cuv) -2] << endl;
    for(i = strlen(cuv) -1; i >= 0; i--) {
        cout << cuv[i];
    }

    return 0;
}
