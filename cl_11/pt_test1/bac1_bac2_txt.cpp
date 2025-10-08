#include <iostream>
#include <fstream>

//https://brainly.ro/tema/8388670
//de validat, copi1ta de mai sus

using namespace std;
int main(){
   ifstream f1("bac1.txt");
   ifstream f2("bac2.txt");

   int x1,x2,i1=1,i2=1,n1,n2;
   f1 >> n1 >> x1;
   f2 >> n2 >> x2;
   while(i1 <= n1 && i2 <= n2){
       if(x1==x2) {
           f1 >> x1;
           f2 >> x2;
           i1++;
           i2++;
       }
       if(x1<x2){
           if(x1%5==0) cout << x1 << " ";
           f1 >> x1;
           i1++;
       }
       if(x2<x1){
           if(x2%5==0) cout << x2 << " ";
           f2 >> x2;
           i2++;
       }
   }

   while(i1 <= n1){
       if(x1%5==0) cout << x1 << " ";
       //cout << "i1 =" << i1 << endl;
       f1 >> x1;
       //cout << "x1 =" << x1 << endl;
       i1++;
   }

   while(i2 <= n2){
       f2 >> x2;
       i2++;
       if(x2%5==0) cout << x2 << " ";
   }
   return 0;
}
