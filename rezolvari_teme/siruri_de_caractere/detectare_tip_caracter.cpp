/*

e) o transformare mari -> mici / mici -> mari
*/

#include <iostream>
#include<string.h>
using namespace std;
int main() {
    char text[255];
    int contor_alfa = 0;
    int contor_cifre = 0;
    int contor_l_mari = 0;
    int contor_l_mici = 0;
    int i;
    cin.get(text, 255, '\n');
    //numarare tipuri caractere: a) b) c) d)
    for(i = 0; i <= strlen(text); i++) {
        if(isalpha(text[i])) contor_alfa++;
        if(isdigit(text[i])) contor_cifre++;
        if(isupper(text[i])) contor_l_mari++;
        if(islower(text[i])) contor_l_mici++;
        //cout << text[i] << endl;
    }
    cout << "litere:      " << contor_alfa << endl;
    cout << "cifre:       " << contor_cifre << endl;
    cout << "litere mari: " << contor_l_mari << endl;
    cout << "litere mici: " << contor_l_mici << endl;

    //transformari: e)
    for(i = 0; i <= strlen(text); i++) {
        if(isupper(text[i])) {
            cout << (char)tolower(text[i]);
        } else {
            cout << text[i];
        }
    }
    cout << endl;
    for(i = 0; i <= strlen(text); i++) {
        if(islower(text[i])) {
            cout << (char)toupper(text[i]);
        } else {
            cout << text[i];
        }
    }

    return 0;
}
