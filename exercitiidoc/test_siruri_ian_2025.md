# Enunt problema 5
![image](https://github.com/user-attachments/assets/7c2cd0ba-d7eb-47a2-bd28-18b10178ad66)

# Rezolvare
```cpp
#include <iostream>
#include <string.h>
using namespace std;
int main() {
    char s[20];
    char* c;
    int n=0,i;
    for(i=1; i<=11; i++){
        cout << "Cuvantul: " << i << " = ";
        cin>>s;
        c = strstr(s, "are");

        if(c != NULL) {
            if(strlen(c) == 3)
                n++;
        }

        //if(strlen(strstr(s,"are")) == 3)
        //    n++;
        //da eroare pt ca strstr intoarece NULL daca nu gaseste 'are'
        //strlen - nu stie sa calculeze lungimea unui NULL
    }
    cout << n;
    return 0;
}
```

# Enunt problema 1

![image](https://github.com/user-attachments/assets/0259b57d-6f5d-4614-9a07-8e8d1838fad9)

# Rezolvare
```cpp
//cuvinte ... .in
//------------------------
A fost odata
Ca niciodata
O fata frumoasa de imparat

//cuvinte ... .out
//------------------------
fost fata

//program
//-------------------------
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
```


# Enunt problema 2

![image](https://github.com/user-attachments/assets/4f0a1752-a28e-432c-a388-9def4e31fda6)


# Rezolvare
```cpp
#include <iostream>
#include <string.h>
using namespace std;

int main() {

    char c1[30];
    char c2[30];
    int i;
    char *p;
    cin >> c1;
    //cout << endl;
    cin >> c2;

    int contor = 0;
    p = c2;
    //parcurg litera cu litera primul cuvant
    for(i = 0; i < strlen(c1) && p != NULL; i++) {
        //cout << i << " " << c1[i] << endl;
        p = strchr(p, c1[i]);
        if(strchr(c2, c1[i])) {
            contor++;
            //cout << "GASIT: contor = " << contor << endl;
        }
    }
    if(contor == strlen(c1)) {
        cout << "DA";
    } else {
        cout << "NU";
    }
    //cout << endl << "SFARSIT";
    return 0;
}
```
