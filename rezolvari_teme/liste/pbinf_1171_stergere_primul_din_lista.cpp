/*
Se consideră o listă liniară simplu înlănțuită, alocată dinamic, în care
 elementele sunt de tipul declarat mai jos:
struct nod{
    int info;
    nod * urm;
};
în care câmpul info memorează un număr întreg, iar câmpul urm memorează adresa
 următorului element al listei.

Cerinţa
Să se scrie o funcție C++ cu următorul prototip:
void stergePrimul(nod * & p);
care șterge primul element al unei liste; pointerul p are ca valoarea adresa
primului element din listă – cel care va fi șters.

Restricţii şi precizări
numele funcției va fi stergePrimul
dacă lista nu conține niciun element, pointerul p va avea valoarea NULL
în toate cazurile, la ieșirea din apel p va memora adresa primului element al
listei; dacă elementul șters este ultimul, p va avea valoarea NULL

Important
Soluţia propusă va conţine definiţia funcţiei cerute.
 Prezenţa în soluţie a altor instrucţiuni poate duce erori de compilare sau
 de execuţie care vor avea ca efect depunctarea soluţiei.
*/

#include <iostream>
using namespace std;
struct nod {
    int info;
    nod* urm;
};
void stergePrimul(nod*& p) {
    if (p != NULL) {
        nod* deSters = p;
        p = p -> urm;
        delete deSters;
    }
}
int main() {
    nod* lista = new nod{1, NULL};
    lista -> urm = new nod{2, NULL};
    lista -> urm -> urm = new nod{3, NULL};
    stergePrimul(lista);
    nod* temp = lista;
    while (temp != NULL) {
        cout << temp -> info << " ";
        temp = temp -> urm;
    }
    cout << endl;
    while (lista != NULL) {
        nod* deSters = lista;
        lista = lista -> urm;
        delete deSters;
    }
    return 0;
}
