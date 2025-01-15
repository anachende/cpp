#include <cstring>
#include <fstream>
#include <ctype.h>
using namespace std;

ifstream fin("atestat.in");
ofstream fout("atestat.out");

int nrlit(char s[255]) {
    int cnt=0;
    for(int i=0;i<strlen(s);i++)
        if(s[i]>='A' && s[i]<='Z')
            cnt++;
    return cnt;
}

void trans(char s[]) {
    if(s[0]>='a' && s[0]<='z') s[0]=s[0]-32;
    for(int i=1;i<strlen(s);i++) {
        if(s[i]>='A' && s[i]<='Z')
            s[i]=s[i]+32;
    }
}

int main() {
   int n, mare=0;
   fin >> n;
   char s[256];

   //citeste fiecare linie din fisier
   for(int i=1;i<=n;i++){
        fin>>s;
        mare = mare + nrlit(s); //numar cate litere mari sunt in cuv si din text
        trans(s);               //transofma cuvantul- litera mare la inceput si litere mici dupa
        fout << s << ' ';       //pune cuvantul in fisier
    }
    fout << endl;
    fout << mare;

    fin.close();
    fout.close();
    return 0;
}
