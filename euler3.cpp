
#include <iostream>
using namespace std;
int main(){
    long long x=600851475143;
    for (long long i=3; i<=x; i=i+2){
        if (x%i==0){
            if (x/i>=i){
                x=x/i;                 
                i=i-2;                             
            }                                       
        }
    }

    cout<<x<<endl;
    return 0;
}  