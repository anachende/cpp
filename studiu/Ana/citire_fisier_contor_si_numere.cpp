#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int contor;
    int nr;
    int i;
    ifstream fin("fisier_contor_si_numere.in");
    ofstream fout("fisier_nr_pare.out");
    fin >> contor;
    cout << contor << endl;
    for(i = 1; i <= contor; i++) {
        fin >> nr;
        cout << " " << nr;
        if(nr % 2 == 0) {
            fout << nr << " ";
        }
    }

    fin.close();
    fout.close();
    return 0;
}
