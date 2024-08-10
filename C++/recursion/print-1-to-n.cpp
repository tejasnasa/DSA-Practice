#include <bits/stdc++.h>
using namespace std;

int i = 0;

void printNos(int n){
    if (i > n) return;
    cout << i++ << " ";
    printNos(n);
}

int main(){
    int n;
    cin >> n;

    printNos(n);

    return 0;
}