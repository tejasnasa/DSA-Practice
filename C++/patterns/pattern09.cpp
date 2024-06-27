#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for (int i = -1*n; i <= n; i++){
        if (i == 0){
            i++;
        }
        for (int j = 1; j <= abs(i)-1; j++){
            cout << " ";
        }
        for (int j = 1; j <= 2*(n-abs(i))+1; j++){
            cout << "*";
        }
        cout << "\n";
    }
    
    return 0;
}