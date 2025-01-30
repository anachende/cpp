#include <iostream>
#include <string.h>
using namespace std;
void f(char s[], int k) {
    int i;
    if(strlen(s) < k) {
        cout << "nu este posibil";
    } else {
        for(i = 0; i < k; i++) {
            cout << s[i];
        }
    }
    cout << endl;
}
int main() {
    char s1[50];
    int n = 5;
    int i;
    for(i = 1; i <= n; i ++) {
        //cout << i << " ";
        cin >> s1;
        f(s1, i);
    }

    return 0;
}
