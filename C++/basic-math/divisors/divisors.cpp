#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    set<int> div = {};

    cout << "divisors are: ";

    for (int i = 1; i <= sqrt(n); i++){
        if (n % i == 0){
            div.insert(i);
            div.insert(n/i);
        }
    }

    for (auto it: div){
        cout << it << " ";
    }
    return 0;
    
}