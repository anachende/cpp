#include <iostream>
#include<string.h>
using namespace std;

int main() {
    char cuv1[100] = "floare";
    cout << strlen(cuv1) << endl;

    strcpy(cuv1, "azi");
    cout << cuv1 << endl;  // => azi

    strcpy(cuv1, "mancare");
    cout << cuv1 << endl; // => mancare

    strncpy(cuv1, "zi", 1);
    cout << cuv1 << endl; // => zancare

    strcpy(cuv1, "mancare");
    cout << cuv1 << endl; // => mancare

    strcat(cuv1, "ziua");
    cout << cuv1 << endl; // => mancareziua

    strcpy(cuv1, "mancare");
    cout << cuv1 << endl; // => mancare

    strncat(cuv1, "ziua", 2);
    cout << cuv1 << endl; //=> mancarezi

    strcpy(cuv1, "azi");
    cout << cuv1 << endl;

    int rez_cmp;
    rez_cmp = strcmp("Azi", "Azi");
    cout << "Rezultat comparare: " << rez_cmp << endl; // => 0

    rez_cmp = strcmp("azi", "Azi");
    cout << "Rezultat comparare: " << rez_cmp << endl; // => 1

    rez_cmp = strcmp("Azi", "azi");
    cout << "Rezultat comparare: " << rez_cmp << endl; // => -1

    rez_cmp = strcmp("abc", "acd");
    cout << "Rezultat comparare: " << rez_cmp << endl; // => -1

    rez_cmp = stricmp("Azi", "azi");
    cout << "Rezultatul: " << rez_cmp << endl;

    rez_cmp = strncmp("calculator", "calcar", 4);
    cout << "rezultatu: " << rez_cmp << endl;

    rez_cmp = strnicmp("calculator", "calcar", 4);
        cout << "rezultatul: " << rez_cmp << endl;

    //===============
    char prop[] = "cuvant1 cuvant2 cuvant3 cuvant4 cuvant5 si alte cuvinte.";
    char *cuv;
    cuv = strtok(prop, " ");
    while(cuv != '\0') {
        cout << cuv << endl;
        cuv = strtok('\0', " ");
    }

    return 0;
}
