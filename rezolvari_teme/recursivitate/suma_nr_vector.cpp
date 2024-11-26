#include <iostream>
using namespace std;
int suma(int v[], int n) {
    if(n == 0) {
        return 0;
    } else {
        return v[n - 1] + suma(v, n - 1);
    }
}
int main() {
    int n = 3;
    int v[n] = {100, 200, 300};
    cout << suma(v, n);

    return 0;
}
