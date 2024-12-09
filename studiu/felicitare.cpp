#include <iostream>
#include <string.h>
using namespace std;
int main() {
    char coduri[12] = {86, 97, 32, 105, 117, 98, 105, 109, 33, 33, 33};
    string mesaj;
    //char mesaj[20];
    for (int i = 0; i < 11; i++) {
        mesaj += static_cast<char>(coduri[i]);
        //mesaj[i] = co
    }
    cout << mesaj << endl;
    coduri(12) = '\0';
    cout << coduri << endl;

    return 0;
}