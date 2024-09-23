#include <iostream>
using namespace std;

void afiseaza_toti_divizorii(int nr) {
	int i = 1;
	int d = 1;

	while(d <= nr) {
		if(nr%d == 0) {
			cout << i << ". " << d << endl;
		}
		d++;
		//divizorii proprii sunt <= n/2
		//pentru a nu calcula inutil, putem merge
		//pana la d <= n/2 si apoi sa-l
		//mai afisam pe n la iesirea din bucla
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
	afiseaza_toti_divizorii(n);
	
	cout << "divizori " << m << endl;
	afiseaza_toti_divizorii(m);
	
	cout << "divizori " << pr << endl;
	afiseaza_toti_divizorii(pr);
	
	return 0;
}
