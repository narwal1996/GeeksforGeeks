#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    int XOR;
	    cin >> XOR;
	    for(int i=0; i<n-2; i++) {
	        int temp;
	        cin>>temp;
	        XOR ^= temp;
	    }
	    for(int i=1; i<=n; i++) XOR ^= i;
	    cout << XOR << endl;
	}
	return 0;
}
