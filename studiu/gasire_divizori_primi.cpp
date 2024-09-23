#include <iostream>
using namespace std;
//gasire divizori primi si puterea la care sunt acestia
void divizori_primi(int nr) {
	int i;
	int p = 0;
	int d = 2;
	while(nr > 1) {
		if(nr%d == 0) {
			p += 1;
			nr = nr/d;
			//cout << "nr = " << nr << " d = " <<d<<endl;
		} else {
			//cout << "aici " << nr << " " <<d<< endl;
			if(p != 0) {
				cout << d << "^" << p << endl;
			}
			d++;
			p = 0;
		}
	}
	if(p != 0) {
		cout << d << "^" << p << endl;
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
