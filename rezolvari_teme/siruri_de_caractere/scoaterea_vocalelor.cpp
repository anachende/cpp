#include <iostream>
#include <string.h>
using namespace std;
int main() {
    char voc[] = "aeiouAEIOU";
    char cuv[225];
    int i;
    int nr_con = 0;
    int nr_voc = 0;
    cin.get(cuv, 255, '\n');
    for(i = 0; i < strlen(cuv); i++) {
        if(strchr(voc, cuv[i]) == NULL) {
            cout << cuv[i];
            nr_con++;
        }
        //cout << i << " " << cuv[i] << endl;
    }
    cout << endl;
    cout << nr_con << endl;

    i = 0;
    while(cuv[i] != '\0') {
        if(strchr(voc, cuv[i]) != NULL) {
            cout << cuv[i];
            nr_voc++;
        }
        //cout << i << " " << cuv[i] << endl;
        i++;
    }
    if(nr_voc == 0){
        cout << "nu exista";
    } else {
        cout << endl << nr_voc;
    }

    /*
    cout << endl;
    cout << cuv << endl;
    cout << &cuv[0] << endl; //cuv este acelasi lucru cu &cuv[0]
    cout << cuv[1] << endl;
    cout << &cuv[1] << endl;
    */

    return 0;
}
