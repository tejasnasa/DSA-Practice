#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for (int i = (n*-1)+1; i <= n-1; i++){
        for (int j = 1; j <= n-abs(i); j++){
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}