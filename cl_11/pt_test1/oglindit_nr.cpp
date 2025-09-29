#include <iostream>
using namespace std;
int main() {
    int n, uc, og = 0;
    cout << "n = ";
    cin >> n;
    while(n > 0) {
        uc = n % 10;
        n = n / 10;
        og = og*10 + uc;
    }
    cout << "og = " << og;

    return 0;
}
