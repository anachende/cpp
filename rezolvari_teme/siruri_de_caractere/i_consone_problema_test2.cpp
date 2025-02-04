#include <iostream>
#include <string.h>
using namespace std;
int main() {
    char s[100];
    cin >> s;
    char v[] = "aeou";
    int i;
    int cont_i = 0;
    int cont_c = 0;
    for(i = 0; i < strlen(s); i++) {
        if(strchr(v, s[i]) != NULL) {

        } else {
            cont_c++;
        }
        if(s[i] == 'i') {
            cont_i++;
        }
    }
    if(cont_i == strlen(s)) {
        cout << "NU";
    } else if(cont_c == strlen(s)) {
        cout << "DA";
    } else {
        cout << "NU";
    }
    return 0;
}
