#include <bits/stdc++.h>
using namespace std;
int i = 0;

void revArr(int arr[], int rev_arr[], int n){
    if (n < 0) return;
    rev_arr[i++] = arr[n--];
    revArr(arr, rev_arr, n);
}

int main(){
    int n;
    cin >> n;
    int arr[n], rev_arr[n];

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    revArr(arr, rev_arr, n-1);

    for (int i = 0; i < n; i++){
        cout << rev_arr[i] << " ";
    }

    return 0;
}