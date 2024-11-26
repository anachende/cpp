#include <iostream>
using namespace std;
void citire(int v[], int n) {
    if(n > 0) {
        citire(v, n-1);
        cout << "v["<< n-1 <<"] = ";
        cin >> v[n-1];
    }
}
int main() {
    int i;
    int n = 3;
    int v[n];
    citire(v, n);


    cout << endl;
    for(i = 0; i < n; i++) {
        cout << i << " " << v[i] << " " << endl;

    }
    return 0;
}
