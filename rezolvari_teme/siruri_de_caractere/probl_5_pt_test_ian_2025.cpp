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
