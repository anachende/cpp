#include <iostream>
#include <string.h>
using namespace std;
void vocale(char s[81] ,int &v) {
    v = 0;
    int i;
    char voc[] = "aeiouAEIOU";
    for(i = 0; i < strlen(s); i++) {
        if(strchr(voc, s[i]) != NULL) {
            v++;
        }
    }
}
int main() {
    char s[81];
    int nr_v;
    cin.getline(s, 81);
    vocale(s, nr_v);
    cout << nr_v;
    return 0;
}
