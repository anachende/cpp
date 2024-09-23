#include <iostream>
using namespace std;

void divizori_la_p_comumi(int nr1, int nr2) {
	int i;
	int p1 = 0;
	int p2 = 0;
	int d = 2;
	while(nr1 > 1 && nr2 > 1) {
		while(nr1%d == 0) {
			p1 += 1;
			nr1 = nr1/d;
			//cout << "nr1 = " << nr1 << " d = " <<d<<endl;
		}
		while(nr2%d == 0) {
			p2 += 1;
			nr2 = nr2/d;
			//cout << "nr2 = " << nr2 << " d = " <<d<<endl;
		}
		
		if(p1 == p2 & p1 != 0) {
			cout << "ok: " << d << "^" << p1 << endl;
		} else if(p1 != p2) {
			cout << "  divizori la puteri diferite:" 	<< endl;
			cout << "  - nr1: " << d << "^" << p1 << endl;
			cout << "  - nr2: " << d << "^" << p2 << endl;
		}
		d++;
		p1 = 0;
		p2 = 0;
	}
	/*
	cout << "Afisare pentru verificare la iesirea din while:";
	if(nr1 == 1 || nr2 == 1) {
		cout << ":" 	<< endl;
		cout << "- nr1: " << nr1 << " d = " << d << endl;
		cout << "- nr2: " << nr2 << " d = " << d << endl;
	}
	*/
	
	//dubla verificare
	if(p1 == p2 & p1 != 0) {
		cout << d << " la " << p1 << endl;
	} else if(p1 != p2) {
			cout << "  divizori la puteri diferite:" 	<< endl;
			cout << "  - nr1: " << d << " la " << p1 << endl;
			cout << "  - nr2: " << d << " la " << p2 << endl;
	}
}

int main() {
	int n,m;
	
	//cout << "n = ";
	//cin >> n;
	//cout "m = ";
	
	n = 16500;
	m = 10780;
	//n = 24; 	//2^3 * 3
	//m = 120;	//2^3 * 3 * 5
	
	divizori_la_p_comumi(n, m);
	
	return 0;
}
