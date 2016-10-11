#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--) {
	    long long int n, temp;
	    cin >> temp;
	    n=temp;
	    string res, s="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	    while(n) {
	        res = s[n%62]+res;
	        n /= 62;
	    }
	    cout << res << endl << temp << endl;
	}
	return 0;
}
