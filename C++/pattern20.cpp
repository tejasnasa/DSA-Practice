#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    n--;

    for (int i = n*-1; i <= n; i++){

        for (int j = 1; j <= n-abs(i)+1; j++){
            cout << "*";
        }

        for (int j = 1; j <= 2*abs(i); j++){
            cout << " ";
        }

        for (int j = 1; j <= n-abs(i)+1; j++){
            cout << "*";
        }

        cout << "\n";
    }

    return 0;
}