#include <iostream>
#include <string.h>
using namespace std;
int nr_voc(char s[]) {
    char v[] = "aeiou";
    int i;
    int cont_v = 0;
    for(i = 0; i < strlen(s); i++) {
        if(strchr(v, s[i]) != NULL) {
            cont_v++;
        }
    }
    return cont_v;
}
int main() {
    char s[101];
    char *cuv; //adresa de inceput a cuvantului
    int nr_cuv = 0;
    int n_v;
    cin.getline(s, 100);
    cout << "nr vocale din tot textul: " << nr_voc(s) << endl;

    //terebuei sa afisez nr cuvantui si cate voc contine
    cuv = strtok(s, " ");
    while(cuv != NULL) {
        nr_cuv++;
        n_v = nr_voc(cuv);
        cout << nr_cuv << " --- " << n_v << endl;
        cuv = strtok('\0', " ");
    }

    return 0;
}
