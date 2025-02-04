#include <iostream>
#include <string.h>
using namespace std;

void nume(char s[], char id[]) {
    char *p, cuv[51];
    p = strtok(s, " ");
    while(p) {
        strcpy(cuv, p);
        p = strtok('\0', " ");
        //if(p != NULL)
            //;
    }
    strcat(id, cuv);
    strcat(id, "2022");
}
int main() {
    char s[51];
    char id[51] = "";
    cin.getline(s, 51);
    nume(s, id);
    cout << id;
    return 0;
}
