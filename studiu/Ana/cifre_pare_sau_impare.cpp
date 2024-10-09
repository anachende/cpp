#include <iostream>
using namespace std;
int main() {
    int nr;
    int uc;
    cout << "Tastati nr:  ";
    cin >> nr;
    while(nr > 0) {
        uc = nr%10;
        nr = nr/10;
        cout << uc ;
        if(uc % 2 == 0) {
            cout << " - par " << endl;
        } else {
            cout << " - imp " << endl;
        }

    }

    return 0;
}
