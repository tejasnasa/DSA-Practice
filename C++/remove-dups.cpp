#include <bits/stdc++.h>
using namespace std;

bool notprime(int n){
    for (int i = 2; i < n/2; i++){
        if (n%i==0)return true;
    }
    return false;
}

int main() {

	int t;
	cin >> t;
	for (int i = 0; i < t; i++){
		int n;
		cin >> n;
		int mat[n];
		for (int j = 0; j < n; j++){
		    cin >> mat[j];
		}
		for (int j = 0; j < n-1; j++){
		    for (int k = j+1; k < n; k++){
		        if (notprime(mat[j]+mat[k])){
    	            cout<<j+1 << " " <<k+1<<"\n";
					goto a;
        	    }
	    	}
		}
		cout << -1 << "\n";
		a:
		
	}

	return 0;

/*
4
1 2 3 4
3
1 1 2
3
3 2 3
*/

}
