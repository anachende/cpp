#include <iostream>
using namespace std;
void ordonare(int a[], int n) {
    int i, aux;
    cout << " ";
    if(n != 1) {
        for(i = 0; i < n - 1; i++) {
            if(a[i] > a[i+1]) {
                aux = a[i];
                a[i] = a[i+1];
                a[i+1] = aux;
            }

        }
        ordonare(a, n-1);
    }
}

int main() {
    int i;
    int a[6] = {63, 273, 9, 83, 93, 123};
    for(i = 0; i < 6; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    ordonare(a, 6);

    for(i = 0; i < 6; i++) {
        cout << a[i] << " ";
    }
}
