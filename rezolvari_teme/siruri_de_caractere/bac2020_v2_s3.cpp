#include <iostream>
#include<string.h>
using namespace std;
int main() {
    char text[100];
    char *cuv;
    //int i;
    cin.get(text, 100, '\n');
    //cout << "textul tastat: " <<text << endl;
    cuv = strtok(text, " ");
    while(cuv != '\0') {
        if(cuv[0] != '-') {
            cout << cuv << " ";
        }
        cuv = strtok('\0', " ");
    }

    return 0;
}
