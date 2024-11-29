#include<iostream>
using namespace std;
int cmmdc(int a, int b) {
    int r;
    while(b!=0) {
      r=a%b;
      a=b;
      b=r;
    }
    return a;
}
struct fractie {
    int x,y;
} f1,f2;

int main() {
    cout << "f1.x = ";
    cin >>f1.x;
    cout << "f1.y = ";
    cin >>f1.y;

    cout << "f2.x = ";
    cin >>f2.x;
    cout << "f2.y = ";
    cin >>f2.y;

    cout << "comparare: " << f1.x << "/" << f1.y;
    cout << " cu " << f2.x << "/" << f2.y << endl;

    if(f1.x*f2.y > f2.x*f1.y)
        cout << f1.x/cmmdc(f1.x, f1.y) << ' ' << f1.y/cmmdc(f1.x, f1.y);
    else
        cout << f2.x/cmmdc(f2.x,f2.y) << ' ' << f2.y/cmmdc(f2.x, f2.y);

return 0;
}
