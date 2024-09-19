#include <iostream>
using namespace std;
int main(){
    int v1{1};
    int v2{2};
    int x{1};
    int suma_pares{0};
    cout<<v1<<" ";

    while(v2<4000000){
        if(v2%2==0){
            suma_pares=suma_pares+v2;
        }
        cout<<v2<<" "; 
        int suma{0};
        suma=v2+v1;
        v1=v2;
        v2=suma;
        x=x+1;
        }


    cout<<endl<<suma_pares;
}