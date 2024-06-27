#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++){
        for (int j = 0; j < i; j++){
            cout << char(int('A')+i-1);
        }
        cout << "\n";
    }

    return 0;
}