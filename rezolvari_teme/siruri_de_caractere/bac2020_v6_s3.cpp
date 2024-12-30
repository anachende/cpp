#include <iostream>
#include<string.h>
using namespace std;
int main() {
    char text[100];
    char vocale[] = "aeiou";
    char *cuv;
    char c;
    int lungime_cuv;
    int i;
    int contor_vocale;
    int contor_consoane;
    int contor_cuv = 0;

    cin.get(text, 100, '\n');
    //cout << "textul tastat: " <<text << endl;
    cuv = strtok(text, " ");
    while(cuv != '\0') {
        lungime_cuv = strlen(cuv);
        contor_vocale = 0;
        contor_consoane = 0;
        for(i = 0; i < lungime_cuv; i++) {
            c = cuv[i];
            if(strchr(vocale, c) != NULL) {
                //cout << "vocala " << c << endl;
                contor_vocale++;
            } else {
                contor_consoane++;
            }
        }
        if(contor_vocale < contor_consoane) {
            contor_cuv++;
            cout << cuv << endl;
        }
        cuv = strtok('\0', " ");
    }
    if(contor_cuv == 0) {
        cout << "nu exista";
    }

    return 0;
}
