#include <iostream>
using namespace std;

bool esPrimo(int n) {
    if (n<=1){
    return false;   
    } 
    if (n<=3){
    return true;
    } 
    if (n%2==0 or n%3==0){
    return false;
    }
    for (int i{5};i*i<=n;i=i+6) {
        if (n%i==0 or n%(i+2)==0){
        return false;
        }
    }
    return true;
}

int main() {
    int x{0};
    int y{1};
    while (x<10001){
        y++;
        if (esPrimo(y)){
        x++;
        }
    }
    cout<<y<<endl;
    return 0;
}
