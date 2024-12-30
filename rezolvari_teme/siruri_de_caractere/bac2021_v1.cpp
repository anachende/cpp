#include <iostream>
#include<string.h>
using namespace std;
int main() {
    char s1[20];
    char s2[20];
    int i;
    strcpy(s1,"bac2021");
    cout<<strlen(s1)<<endl;
    strcpy(s2,s1+3);
    strcpy(s2+2,"20-");
    strcat(s2,s1+3);
    cout<<s2;

    return 0;
}
