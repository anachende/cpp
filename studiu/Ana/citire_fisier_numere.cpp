#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int contor;
    int nr;
    int i;
    ifstream fin("fisier_fara_contor.in");
    ofstream fout("fisier_nr_pare_2.out");

    while(fin >> nr) {
        cout << " " << nr;
        if(nr % 2 == 0) {
            fout << nr << " ";
        }
    }

    fin.close();
    fout.close();
    return 0;
}
