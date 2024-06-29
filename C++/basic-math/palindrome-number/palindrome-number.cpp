#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int l = n, m = 0;
    
    while (n){
        m = m * 10 + n % 10;
        n = n / 10;
    }

    if (l == m) {
        cout << "true";
    }
    else { 
        cout << "false";
    }

    return 0;
}