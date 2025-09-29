/*
Se consideră o listă liniară simplu înlănțuită, alocată dinamic,
 în care elementele sunt de tipul declarat mai jos:
 struct nod{
    int info;
    nod * urm;
};
în care câmpul info memorează un număr natural, iar câmpul urm memorează adresa
următorului element al listei.
Cerinţa Să se scrie o funcție C++ cu următorul prototip:
void sterge(nod * p, nod * q);
care elimină, dacă există, din lista pentru care primul element are adresa
memorată în pointerul p elementul situat în listă după elementul cu adresa
memorată în q. Important Soluţia propusă va conţine definiţia funcţiei cerute.
 Prezenţa în soluţie a altor instrucţiuni poate duce erori de compilare sau de
 execuţie care vor avea ca efect depunctarea soluţiei.
*/


#include <iostream>
using namespace std;
struct nod {
    int info;
    nod *urm;
};
void sterge(nod *p, nod *q) {
    if (q != NULL && q -> urm != NULL) {
        nod *de_sters = q -> urm;
        q -> urm = q -> urm -> urm;
        delete de_sters;
    }
}
void adauga_inceput(nod *&p, int val) {
    nod *nou = new nod;
    nou -> info = val;
    nou -> urm = p;
    p = nou;
}
void afiseaza_lista(nod *p) {
    while (p != NULL) {
        cout << p -> info << " ";
        p = p -> urm;
    }
  cout << endl;
}

int main() {
    nod *lista = NULL;
    adauga_inceput(lista, 10);
    adauga_inceput(lista, 20);
    adauga_inceput(lista, 30);
    adauga_inceput(lista, 40);
    afiseaza_lista(lista);
    nod *q = lista;
    while (q != NULL && q -> info != 30) {
        q = q -> urm;
    }
    if (q != NULL) {
        sterge(lista, q);
    }

    afiseaza_lista(lista);

    return 0;
}
