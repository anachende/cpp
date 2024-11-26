#include <iostream>
using namespace std;
int suma(int long n) {
    if(n == 0) {
        return 0;
    } else {
        return n + suma(n - 1);
    }
}
int main() {
    int n = 5;
    cout << suma(n);
    return 0;
}
