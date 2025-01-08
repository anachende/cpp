/*
Într-un text cu cel mult 102 caractere cuvintele sunt formate din litere mici ale alfabetului englez și sunt
separate prin câte un spațiu. Scrieți un program C/C++ care citește de la tastatură un text de tipul
menționat, pe care îl modifică în memorie, duplicând fiecare cuvânt format numai din vocale. Cuvântul
duplicat este separat prin câte un spațiu de cuvintele vecine. Textul transformat este afișat pe ecran, iar
dacă nu există astfel de cuvinte, se afișează pe ecran mesajul nu exista.
Exemplu: dacă textul citit este oaia aia alba e a ei
se obține textul oaia oaia aia aia alba e e a a ei ei
*/

#include <iostream>
#include<string.h>
using namespace std;
int main() {
    char text[100];
    char text_final[100] = "";
    char vocale[] = "aeiou";
    char *cuv;
    int l_text_final;
    int contor = 0;
    int nr_vocale;
    int i;

    cin.get(text, 100, '\n');
    cuv = strtok(text, " ");

    //cout << ultima_litera_c1 << endl;

    while(cuv != '\0') {
        //adaugam cuvantul in textul final
        l_text_final = strlen(text_final);
        strcpy(&text_final[l_text_final], cuv);
        //adaugam un spatiu dupa cuvant
        l_text_final = strlen(text_final);
        strcpy(&text_final[l_text_final], " ");
        //gasesc cate vocale sunt in cuvant
        nr_vocale = 0;
        for(i = 0; i < strlen(cuv); i++) {
            if(strchr(vocale, cuv[i]) != NULL) {
                nr_vocale++;
            }
        }
        //verific daca toate literele sunt vocale
        if(nr_vocale == strlen(cuv)) {
            //duplic cuvantul - il mai adaug inca odata
            l_text_final = strlen(text_final);
            strcpy(&text_final[l_text_final], cuv);

            //adaug spatiu dupa cuvant
            l_text_final = strlen(text_final);
            strcpy(&text_final[l_text_final], " ");

            contor++;
        }
        cuv = strtok('\0', " ");
    }

    if(contor == 0) {
        cout << "nu exista";
    } else {
        cout << text_final;
    }
    //cout << "SALUT" << endl;

    return 0;
}
