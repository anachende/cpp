/*
Într-un text cu cel mult 102 caractere cuvintele sunt formate din litere mici ale alfabetului englez și sunt
separate prin câte un spațiu. Scrieți un program C/C++ care citește de la tastatură un text de tipul
menționat, pe care îl modifică în memorie, inserând cuvântul succes între oricare două cuvinte ale sale
care se termină cu aceeași literă. Cuvântul inserat este separat prin câte un spațiu de cuvintele vecine.
Textul transformat este afișat pe ecran, iar dacă nu există perechi de astfel de cuvinte, se afișează pe
ecran mesajul nu exista.
Exemplu: dacă textul citit este testez validez utilizez date corecte acum
se obține textul testez succes validez succes utilizez date succes corecte acum
*/

#include <iostream>
#include<string.h>
using namespace std;
int main() {
    char text[100];
    char text_final[300] = "";
    char ultima_litera_c1;
    char ultima_litera_c2;
    char *cuv;
    int l_text_final;
    int contor = 0;

    cin.get(text, 100, '\n');
    cuv = strtok(text, " ");
    ultima_litera_c1 = cuv[strlen(cuv) -1];
    cout << ultima_litera_c1 << endl;
    strcpy(text_final, cuv);

    while(cuv != '\0') {
        cuv = strtok('\0', " ");
        if(cuv != '\0') {
            ultima_litera_c2 = cuv[strlen(cuv) -1];
            cout << ultima_litera_c2 << endl;
            if(ultima_litera_c1 == ultima_litera_c2) {
                l_text_final = strlen(text_final);
                strcpy(&text_final[l_text_final], " succes");
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
