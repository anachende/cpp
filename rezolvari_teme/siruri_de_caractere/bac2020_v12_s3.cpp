/*
Într-un text cu cel mult 102 caractere, cuvintele sunt formate din litere mici ale alfabetului englez și sunt
separate prin câte un spațiu. Scrieți un program C/C++ care citește de la tastatură un text de tipul
precizat, pe care îl transformă în memorie, eliminând numai ultima vocală care apare în text, ca în
exemplu. Programul afișează pe ecran textul obținut sau mesajul nu exista, dacă în text nu există
nicio vocală. Se consideră vocale literele a, e, i, o, u.
Exemplu: dacă se citește textul: cuvantul ritm poate fi tradus rhythm
se obține textul cuvantul ritm poate fi trads rhythm
*/

#include <iostream>
#include<string.h>
using namespace std;
int main() {
    char text[100];
    char text_final[100] = "";
    char ultima_litera_c1;
    char ultima_litera_c2;
    char vocale[] = "aeiou";
    char *cuv;
    int l_text_final;
    int contor = 0;

    cin.get(text, 100, '\n');
    cuv = strtok(text, " ");
    ultima_litera_c1 = cuv[strlen(cuv) -1];
    //cout << ultima_litera_c1 << endl;
    strcpy(text_final, cuv);

    while(cuv != '\0') {
        cuv = strtok('\0', " ");
        if(cuv != '\0') {
            ultima_litera_c2 = cuv[strlen(cuv) -1];
            //cout << ultima_litera_c2 << endl;

            if(ultima_litera_c1 == ultima_litera_c2) {
                l_text_final = strlen(text_final);
                //strcpy(&text_final[l_text_final], " succes");
                contor++;
                //cout << "*2. Text final cu succes: " << text_final << endl;
            }

            l_text_final = strlen(text_final);
            strcpy(&text_final[l_text_final], " ");
            strcpy(&text_final[l_text_final + 1], cuv);

            //cout << "*3. Text final wile: " << text_final << endl;
            ultima_litera_c1 = ultima_litera_c2;
        }
    }

    if(contor == 0) {
        cout << "nu exista";
    } else {
        cout << text_final;
    }
    //cout << "SALUT" << endl;

    return 0;
}
