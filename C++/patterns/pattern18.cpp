#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for (int i = n; i >= 1; i--){
        for (int j = 0; j <= n-i; j++){
            cout << char(int('A')+i+j-1) << " ";
        }
        cout << "\n";
    }

    return 0;
}