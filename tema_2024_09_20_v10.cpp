#include <iostream>
using namespace std;

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
				cout << d << " la " << p << endl;
			}
			d++;
			p = 0;
		}
	}
	if(p != 0) {
		cout << d << " la " << p << endl;
	}
}

divizori_la_p_comumi(int nr1, int nr2) {
	int i;
	int p = 0;
	int d = 2;
	while(nr1 > 1 && nr2 > 1) {
		if(nr1%d == 0) {
			p += 1;
			nr = nr/d;
			//cout << "nr = " << nr << " d = " <<d<<endl;
		} else {
			//cout << "aici " << nr << " " <<d<< endl;
			if(p != 0) {
				cout << d << " la " << p << endl;
			}
			d++;
			p = 0;
		}
	}
	if(p != 0) {
		cout << d << " la " << p << endl;
	}
}

int main() {
	int n,m;
	
	//cout << "n = ";
	//cin >> n;
	//cout "m = ";
	
	n = 16500;
	m = 10780;
	
	divizori_primi(n);
	divizori_primi(m);
	
	return 0;
}
