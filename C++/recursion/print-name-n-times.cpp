#include <bits/stdc++.h>
using namespace std;

void printNames(string s, int n){
    if (n == 0) return;
    cout << s << endl;
    printNames(s,n-1);
}

int main(){
    int n;
    string s;
    cin >> s >> n;

    printNames(s,n);

    return 0;
}