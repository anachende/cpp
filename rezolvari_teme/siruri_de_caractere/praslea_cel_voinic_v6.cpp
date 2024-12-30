#include <iostream>
#include<string.h>
using namespace std;
int main() {
    char s[50];
    char t[50];
    int i;
    strcpy(s,"PRASLEA*CEL*VOINIC"); i=0;
    while (i<strlen(s))
    if (strchr("ACEI",s[i])!=NULL) {
         strcpy(t,s+i+1); strcpy(s+i,t);

    } else i=i+1;
    cout << s;
    return 0;
}
