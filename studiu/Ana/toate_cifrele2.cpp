#include <iostream>
using namespace std;
int main() {
    int uc;
    long long n = 272332422;
    long long aux = n;
    bool toate2 = 1;
     while(n > 0) {
         uc = n % 10;
         n = n / 10;
         if(uc != 2 && uc != 3) {
             toate2 = 0; //toate 2 sau 3
             cout << "cifra diferita de 2: " << uc << endl;
         }
     }
     if(toate2 == 1) {
         cout << "nr: " << aux << "  are taoate cifrele 2";
     }
     return 0;
}
