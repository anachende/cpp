#include <iostream>
#include <fstream>

using namespace std;

int cifre_pare(int x) {
    //cout << "START " << x << endl;
    int uc, s = 0, are_c_p = 0;
    while(x > 0) {
        uc = x%10;
        x = x/10;
        if(uc%2 == 0) {
            are_c_p = 1;
            s = s + uc;
            //cout << s << " _ " << uc << endl;
        }
    }
    if(are_c_p == 1){
        return s;
    } else {
        return -1;
    }
}

int main() {
    ifstream f("suma.in");
    int n; //nr de pe prima linie din fisier
    int v[100]; //vectorul care va contine cele n numere de pe linia 2 din fisier
    int i;
    int s_max = -1;
    int s_c_p;
    int nr_s_max;

    f >> n;
    cout << "n: " << n << endl;

    for(i = 0; i < n; i++) {
        f >> v[i];
    }
    f.close();

    for(i = 0; i < n; i++) {
        s_c_p = cifre_pare(v[i]);
        cout << v[i] << ", s =  " << s_c_p << endl;
        if(s_c_p > s_max) {
            s_max = s_c_p;
            nr_s_max = v[i];
        }
    }

    cout << "suma maxima: " << s_max << ", pentru numarul: " << nr_s_max;
    return 0;
}
