#include <iostream>
#include<string.h>
using namespace std;
int main() {
    char s[20];
    char t[20];
    int i;
    strcpy(s,"sanataTEA");
    cout<<strlen(s) << endl;
    i=0;
    while(i<strlen(s))
     if(s[i]=='a') {
         strcpy(t, s+i+1);
         strcpy(s+i, t);
         cout <<"i: "<< i<< ": " << s + i << endl;
     } else i=i+1;
    cout<<s;

    return 0;
}
