#include <iostream>
#include <string.h>
using namespace std;
int nvoc(char s[100]) {
    char voc[] = "aeiouy";
    int i;
    int cont = 0;
    int lungime = strlen(s);
    for (i = 0; i < lungime; i++) {
        //cout << i <<" " << s[i] << endl;
        if(strchr(voc, s[i]) != NULL) {
            //cout << "vocala" << endl;
            cont ++;
        }
    }
    return cont;
}

int main() {
    char x[20];
    cout << "dati cuvantul x: " ;
    cin >> x;
    //cout << nvoc(x) << endl;
    char y[20];
    cout << "dati cuvantul y: ";
    cin >> y;
    //cout << nvoc(y);
    //nr consoane = lungime sir - nr vocala
    if( (strlen(x)-nvoc(x)) == (strlen(y)-nvoc(y)) ) {
        cout << "cuvintele au acelas nr de consoane";
    } else {
        cout << "cuvintele NU au acelas nr de consoane";
    }

    return 0;
}
