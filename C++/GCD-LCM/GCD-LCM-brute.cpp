#include <iostream>
using namespace std;

int main(){
    int m, n;
    cin >> m >> n;

    if (m > n){
        int d = m;
        m = n;
        n = d;
    }

    int x = INT_MIN;
    int y = INT_MAX;

    for (int i = 1; i <= m; i++){
        if ((m % i == 0 && n % i == 0) && x < i){
            x = i;
        }
    }

    cout << x << " " << (m*n)/x;

    return 0;
}