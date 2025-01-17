#include <iostream>
#include <string.h>
using namespace std;
int main() {
    char cuv[100];
    int contor_tot = 0;
    int contor_sp_p = 0;
    int contor = 0;
    int i;
    cin.get(cuv, 100, '\n');
    int lungime = strlen(cuv);
    for (i = 0; i < lungime; i++) {
        contor_tot++;
        if (isalnum(cuv[i])) {
            contor++;
        } else {
            contor_sp_p++;
        }
    }

    cout << contor << endl;
    cout << contor_tot << endl;
    cout << contor_sp_p << endl;

    return 0;
}
