#include <iostream>
#include <math.h>
#include <typeinfo>
using namespace std;

int main(){
    int n;
    cin >> n;

    bool neg = false;

    if (n <= 0){
        neg = true;
        n *= -1;
    }

    int x = 0;
    int a = n;
    while (a > 0){
        x++;
        a = a/10;
    }

    long m = 0;

    while (n > 0){
        m += (n % 10) * pow(10,x-1);
        x--;
        n /= 10;
    }
    
    if (m <= pow(-2,31) || m >= pow(2,31))return 0;

    if (neg == true){
        cout << m*-1;
    }
    else cout << m;
    
    return 0;
    
}