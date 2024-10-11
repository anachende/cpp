#include <iostream>
/*
Pregatire pentru problema:
 - algoritmul care gaseste divizorii primi

ECTUL al III-lea (30 de puncte)
1. Subprogramul factori are doi parametri, n și m, prin care primește câte un număr natural din intervalul
[1,109]. Subprogramul returnează numărul valorilor prime care apar la aceeași putere atât în
descompunerea în factori primi a lui n, cât și în descompunerea în factori primi a lui m.
Scrieți definiția completă a subprogramului.
Exemplu: dacă n=16500 și m=10780, atunci subprogramul returnează 2 (16500=2235311,
10780=2257211)

*/


using namespace std;
//gasire divizori primi si puterea la care sunt acestia
void divizori_primi(int nr) {
	int i;
	int p = 0;
	int d = 2;
	while(nr > 1) {
		while (nr%d == 0) {
			p += 1; //p = p + 1
			nr = nr/d;
			//cout << "nr = " << nr << " d = " <<d<<endl;
		}
			//cout << "aici " << nr << " " <<d<< endl;
		if(p != 0) {
			cout << d << "^" << p << endl;
		}
		d++;
		p = 0;
	}
}

int main() {
	int n,m, pr;

	//preluare date de la tastatura
	//cout << "n = ";
	//cin >> n;

	n = 16500;
	m = 10780;
	pr = 10781;

	cout << "divizori " << n << endl;
	divizori_primi(n);

	cout << "divizori " << m << endl;
	divizori_primi(m);

	cout << "divizori " << pr << endl;
	divizori_primi(pr);

	return 0;
}
