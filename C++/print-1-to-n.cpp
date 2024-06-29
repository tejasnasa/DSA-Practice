#include <bits/stdc++.h>
using namespace std;

void printNos(int i, int n){
    if (i <= n){
        cout << i << " ";
        printNos(++i,n);
    }
}

int main(){
    int n;
    cin >> n;

    printNos(1,n);

    return 0;
}