#include <iostream>
#include<string.h>
using namespace std;
int main() {
    char s[50];
    strcpy(s,"muzeu");
    //cout << s[0] << endl;
    s[0]=s[0]+1;
    //cout << s[0] + 1 << endl;

    cout<<s[1]<<s[0]<<endl;
    strcpy(s,"muzeu"+2);
    cout<<s;
    return 0;
}
