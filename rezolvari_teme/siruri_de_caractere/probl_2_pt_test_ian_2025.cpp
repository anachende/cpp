#include <iostream>
#include <string.h>
using namespace std;

int main() {

    char c1[30];
    char c2[30];
    int i;
    char *p;
    cin >> c1;
    //cout << endl;
    cin >> c2;

    int contor = 0;
    p = c2;
    //parcurg litera cu litera primul cuvant
    for(i = 0; i < strlen(c1) && p != NULL; i++) {
        //cout << i << " " << c1[i] << endl;
        p = strchr(p, c1[i]);
        if(strchr(c2, c1[i])) {
            contor++;
            //cout << "GASIT: contor = " << contor << endl;
        }
    }
    if(contor == strlen(c1)) {
        cout << "DA";
    } else {
        cout << "NU";
    }
    //cout << endl << "SFARSIT";
    return 0;
}
