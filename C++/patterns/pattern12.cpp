#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            cout << j;
        }
        for (int j = 2*(n-i); j > 0; j--){
            cout << " ";
        }
        for (int j = 1; j <= i; j++){
            cout << i-j+1;
        }
        cout << "\n";
    }

    return 0;
}