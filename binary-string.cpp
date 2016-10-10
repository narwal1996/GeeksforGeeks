#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    string s;
	    cin >> s;
	    long long int nones = 0;
	    for(int i=0; i<n; i++)  if(s[i]=='1')   nones++;
	    if(n<2 || nones<2) cout << 0 << endl;
	    else    cout << (nones*(nones-1))/2 << endl;
	}
	return 0;
}
