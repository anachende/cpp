#include <iostream>
using namespace std;
void afisvec(int v[], int n) {
    if(n > 0){
       afisvec(v, n-1);
       cout << v[n-1] << " ";
    }

}

int main(){
    int v[5] = {3, 6, 5, 4, 2};
    afisvec(v, 5);

    return 0;
}
