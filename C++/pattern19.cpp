#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for (int i = n*-1; i <= n; i++){
        if (i == 0)i++;

        for (int j = abs(i); j >= 1; j--){
            cout << "*";
        }

        for (int j = 0; j < n-abs(i); j++){
            cout << "  ";
        }

        for (int j = abs(i); j >= 1; j--){
            cout << "*";
        }

        cout << "\n";
    }

    return 0;
}