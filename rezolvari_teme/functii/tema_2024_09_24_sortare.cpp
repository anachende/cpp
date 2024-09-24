#include <iostream>
#include <iomanip>
using namespace std;

void sortare(int tablou[], int nr_el) {
    int aux;
    for(int i = 0; i < nr_el; i++) {
        for(int j = i+1; j < nr_el; j++) {
            if(tablou[i] < tablou[j]) {
                aux = tablou[i];
                tablou[i] = tablou[j];
                tablou[j] = aux;
            }
        }
    }
}

void afisare_tablou(int tbl[], int nr_el) {
    int i;
    for(i = 0; i < nr_el; i++) {
        cout << setw(6) << tbl[i] << " ";
    }
    cout << endl;
}

int main() {
    int n = 9;
    int tablou[100] = {19, 25, 5632, 9872, 48903, 33, 17634, 90, 3452};
    cout << "Tablou initial:             ";
    afisare_tablou(tablou, n);
    sortare(tablou, n);
    cout << "Tablou sortat descrescator: ";
    afisare_tablou(tablou, n);
    return 0;
}
