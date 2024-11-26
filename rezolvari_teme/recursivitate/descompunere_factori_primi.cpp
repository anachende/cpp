/*
 n   f
--------
12 | 2
 6 | 2
 3 | 3
 1 |

 n   f
--------
15 | 3
 5 | 5
 1 |

*/


#include <iostream>
using namespace std;
void descompunere(int n, int f) {
    /*
    if(f*f > n) {
        f = n;   //nr prim factor = nr
    }
    */
    if(n > 1) {
        int p = 0;
        while(n % f == 0) {
            p = p + 1;
            n = n / f;
        }
        if( p > 0) {
            cout << f << "^" << p << endl;
        }
        descompunere(n, f + 1);
    }
}
int main() {
    descompunere(121, 2);
    return 0;
}
