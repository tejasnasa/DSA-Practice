#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int dup = n;
    int x = 0;
    int len = log10(n) + 1;

    while (dup > 0){
        x += pow(dup % 10, len);
        dup /= 10;
    }

    if (x == n) cout << "yes";
    else cout << "no";

    return 0;
    
}