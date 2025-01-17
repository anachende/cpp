#include <iostream>
#include <string.h>
using namespace std;
int main() {
    char text1[100] = "Cuvant1 - 2";
    char text2[100] = "";
    int i;
    //echivalent la
    //strcpy(text2, text1)

    for(i = 0; i < strlen(text1); i++) {
        text2[i] = text1[i];
    }
    cout << i << endl;
    text2[i] = '\0';
    cout << text2;
    return 0;
}
