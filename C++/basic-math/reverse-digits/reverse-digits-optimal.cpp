#include <iostream>
using namespace std;

int main(){
    int n;
    long m = 0;
    cin >> n;

    while (n){
        m = m * 10 + n % 10;
        n = n / 10;
    }
    
    if(m > INT_MAX || m < INT_MIN) return 0;
    cout << m;
}