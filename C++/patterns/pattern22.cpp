#include <iostream>
using namespace std;

void pattern(int n, int i){
    if (i == -1*n || i == n){
        for (int j = n*-1; j <= n; j++){
        cout << n+1 << " ";
        }
    }
    else{
        cout << n+1 << " ";
        pattern(n-1,i);
        cout << n+1 << " ";
    }
}

int main(){
    int n;
    cin >> n;
    n--;

    for (int i = n*-1; i <= n; i++){
        pattern(n,i);
        cout << "\n"; 
    }
}