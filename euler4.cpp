#include <iostream>
using namespace std;

bool es_Palindromo(int n) {
    int num=n;
    int vuelta=0;
    while (n > 0) {
        int digito=n%10;
        vuelta=vuelta*10+digito;
        n=n/10;
    }
    return num == vuelta;
}

int main() {
    int pal{0};
    for (int i = 100; i < 1000; ++i){
        for (int j = i; j < 1000; ++j){
            int n = i * j;
            if (es_Palindromo(n) and n>pal){
                pal = n;
            }
        }
    }

    cout<<pal<<endl;
    return 0;
}
