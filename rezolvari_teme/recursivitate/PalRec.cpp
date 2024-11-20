#include <iostream>
using namespace std;

int PalRec(int a[], int st, int dr) {
    if(st == dr) {
        return 1;
    }
    cout << a[st] << " - " << a[dr] << endl;
    if(a[st] == a[dr]) {
        if(st+1 < dr-1) {
            return PalRec(a, st+1, dr-1);
        } else {
            return 1;
        }

    } else {
        return 0;
    }
}

int main() {
    int a[10] = {0,3,5,6,5,3,3,5,-1,5};
    cout << PalRec(a, 4, 7) << endl;
    cout << PalRec(a, 1, 4) << endl;
    cout << PalRec(a, 2, 4) << endl;
    return 0;
}
