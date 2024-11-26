#include <iostream>
using namespace std;
int suma(int n) {
    int i;
    int suma = 0;
    for(i = 0; i <= n; i++) {
        suma = suma + i;
    }
    return suma;
}
int main() {
    int n = 5;
    cout << suma(n);
    return 0;
}
