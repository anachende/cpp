#include<iostream>
using namespace std;

int schimb(int n, int x, int p) {
    int nr_o = 0, nr = 0;
    int br = 0;
    int i = 0;
    int uc;
    while(n > 0) {
        uc = n % 10;
        n = n / 10;
        if (i == p) {
            nr_o = nr_o*10 + x;

        } else {
            nr_o = nr_o*10 + uc;
        }
        i++;

    }
    while(nr_o > 0) {
        uc = nr_o % 10;
        nr_o = nr_o %10;
        nr = nr*10 + uc;
    }
    return n;
}

void NrImp(int x, int y, int &nr) {
    int nr_curent;
    int divizor;
    int nr_div_imp;

    for(nr_curent = x; nr_curent <= y; nr_curent++) {
        divizor = 1;
        nr_div_imp = 0;
        while(divizor <= nr_curent/2) {
            if(nr_curent % divizor == 0 && divizor % 2 != 0) {
                nr_div_imp ++;
            }
            divizor++;
        }
        if(nr_curent % 2 != 0) {
            nr_div_imp++;
        }
        if(nr_div_imp == 3) {
            nr++;
            cout << nr_curent << " ";
        }

    }

}

void imog(int x, int y, int &rez) {
    int x_c_imp_og = 0;
    int y_c_imp_og = 0;
    int dublu_og_x_c_imp = 0;
    int uc;

   while(x > 0) {
       uc = x % 10;
       x = x / 10;
       if(uc % 2 == 1) {
           x_c_imp_og = x_c_imp_og*10 + uc;
       }
   }
   while(x_c_imp_og > 0) {
       uc = x_c_imp_og % 10;
       x_c_imp_og = x_c_imp_og / 10;
       dublu_og_x_c_imp = dublu_og_x_c_imp*10 + uc;
   }
   cout << "dublul oglindit impar x: " << dublu_og_x_c_imp << " ";

   while(y > 0) {
       uc = y % 10;
       y = y / 10;
       if(uc % 2 == 1) {
           y_c_imp_og = y_c_imp_og*10 + uc;
       }
   }
   cout << "oglinditul impar y; " << y_c_imp_og << endl;

   if(dublu_og_x_c_imp == y_c_imp_og != 0) {
       rez = 1;
   } else {
       rez = 0;
   }
}

void inserare(int &n) {
    int uc;
    int pc;
    int d;
    int ext_og = 0;
    uc = n % 10;
    n = n / 10;
    ext_og = ext_og*10 + uc;
    while(n > 0) {
        pc = n % 10;
        n = n / 10;
        if(pc >= uc) {
            d = pc - uc;
        } else {
            d = uc - pc;
        }
        ext_og = ext_og*10 +d;
        ext_og = ext_og*10 +pc;

        cout << "uc = " << uc << ", pc = " << pc << " " << d <<endl;
        uc = pc;
    }
    //cout << ext_og << endl ;
    n = 0;
    while(ext_og > 0) {
        uc = ext_og % 10;
        ext_og = ext_og / 10;
        n = n*10 + uc;
    }
    //cout << n;
}

int kpn(int a, int b, int k) {
    int i;
    int d;
    int s_div;
    int contor = 0;
    int ret = -1;
    for(i = a; i <= b; i++) {
        d = 1;
        s_div = 0;
        cout << i << " -> ";
        while(d <= i) {
            if(i % d == 0) {
                s_div = s_div + d;
                cout << d << " ";
            }
            d++;
        }
        cout << " " <<s_div;

        if((i % 2 == 0 && s_div % 2 == 0) || (i % 2 == 1 && s_div % 2 == 1)) {
            contor ++;
            cout << " --- p_numar: " << contor;
            if(contor == k) {
                ret = i;
            }

        }

        cout << endl;

    }
    return ret;
}






int main() {
    //cout << schimb(12587, 6, 3);
    /*
    int x = 4;
    int y = 50;
    int nr = 0;
    NrImp(x, y, nr);
    cout << endl << "nr: " << nr << endl;
    */

    /*
    int x = 523;
    int y = 84356;
    int rezultat;
    cout << "x = " << x << ", y = " << y << endl;
    imog(x, y, rezultat);
    cout << endl << rezultat;
    */

    /*
    int n = 7255;
    inserare(n);
    cout << n;
    */

    cout << "R: " <<kpn(27, 50, 3);
    return 0;
}
