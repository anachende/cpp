#include <iostream>
#include <string.h>
using namespace std;
int main() {
    int coduri[11] = {86, 97, 32, 105, 117, 98, 105, 109, 33, 33, 33};
    string mesaj;
    for (int i = 0; i < 11; i++) {
        mesaj += static_cast<char>(coduri[i]);
    }
    cout << mesaj << endl;

    return 0;
}