#include <fstream>
#include <iostream>
#include <string.h>
using namespace std;

ifstream fin("cuvinte_probl_1_ian.in");
ofstream fout("cuvinte_probl_1_ian.out");

int main() {
    char s[255];
    char *p;
    int L;
    cout << "Dati lungimea cuvantului: L = ";
    cin >> L;
    while( !fin.eof() ) {      // verifica daca n-am ajuns la sfarsitul fisierului
        fin.getline(s, 255);   // citeste o linie - pana la '\n' sau 255 caractere
        cout << "linia citita: " << s << endl;
        p = strtok(s, " ");
        while(p) {
            if(strlen(p) == L)
                fout << p << " ";
            p = strtok(NULL, " ");
        }
    }
    return 0;
}
