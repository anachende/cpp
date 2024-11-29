#include<iostream>
using namespace std;
struct data_nastere {
    int an;
    int luna;
    int zi;
};

/*
 returneaza:
    0 daca d1 = d2 - aceiasi varsa
    1 daca omul cu d1 mai tanar decat cel cu d2:  d1 > d2
    2 daca omul cu d1 mai batran decat cel cu d2: d1 < d2
*/
int compara_varsta(data_nastere d1, data_nastere d2) {
    if(d1.an < d2.an) {
        return 2;
    } else if(d1.an > d2.an) {
        return 1;
    } else {  // acelas an
        if(d1.luna < d2.luna) {
            return 2;
        } else if (d1.luna > d2.luna) {
            return 1;
        } else { // aceiasi luna
            if(d1.zi < d2.zi) {
                return 2;
            } else if (d1.zi > d2.zi) {
                return 1;
            } else { // aceiasi zi
                return 0;
            }
        }
    }
}

int main() {
    int n;
    int pmax, pmin;
    data_nastere d, dmin, dmax;
    cout << "nr persoane: n = ";
    cin >> n;
    // citesc prima pers si consider ca are dmin si dmax
    cout << "Persoana 1 " << endl;
    cout << "an   = ";
    cin >> d.an;
    cout << "luna = ";
    cin >> d.luna;
    cout << "zi   = ";
    cin >> d.zi;
    dmin.an = d.an;
    dmax.an = d.an;
    dmin.luna = d.luna;
    dmax.luna = d.luna;
    dmin.zi = d.zi;
    dmax.zi = d.zi;
    //consideram ca min si max sunt pe prima pozitie
    pmin = 1;
    pmax = 1;

    for(int i = 2; i <= n; i++) {
        cout << "Persoana " << i << endl;
        cout << "an   = ";
        cin >> d.an;
        cout << "luna = ";
        cin >> d.luna;
        cout << "zi   = ";
        cin >> d.zi;

        if(compara_varsta(d, dmin) == 1) {
            pmin = i;
            dmin.an = d.an;
            dmin.luna = d.luna;
            dmin.zi = d.zi;
        }
        if(compara_varsta(d, dmax) == 2) {
            pmax = i;
            dmax.an = d.an;
            dmax.luna = d.luna;
            dmax.zi = d.zi;
        }
    }
    cout << pmin << " " << pmax;

    // cout << d.an << " " << d.luna << " " << d.zi;
    return 0;
}
