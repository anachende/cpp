#include <iostream>
#include<string.h>
using namespace std;
int main() {
    char s[10];
    int i;
    strcpy(s,"stilou");
    cout<<s<<' ';
    strncpy(s,"stilou",4); s[4]='\0';
    //cout<< s;
    for(i=0;i<4;i++)
        if (i % 2==0 )
            s[i]=s[0]+i-1;
        else
            s[i]=s[0]+3*(2*i/3-1);

    cout<<s;

  // cout << 3*(2*1/3-1);

    return 0;
}
