#include <iostream>
#include <string.h>
using namespace std;
void f(char s[], int k) {
    int i;
    if(strlen(s) < k){
        cout << "nu este posibil";
    } else {
        for(i = 0; i < k; i++) {
            cout <<s[i];
        }
    }
    cout << endl;
}

int main() {
    char c1[50];
    int n = 5;
    for(int i = 1; i <= n; i++) {
        cout << "dati cuvantul " << i << ": ";
        cin >> c1;
        f(c1, i);
    }

    return 0;
}
