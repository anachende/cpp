#include <iostream>

int oglindeste(int nr) {
    int ogl = 0;
    int uc;
    while(nr > 0) {
        //ogl = ogl*10 + nr%10;
        uc = nr%10;
        nr = nr/10;
        ogl = ogl*10 + uc;
    }
    return ogl;
}

using namespace std;
int main() {
    int nr;

    cout << "Tastati nr:  ";
    cin >> nr;

    cout << oglindeste(nr);


    return 0;
}
