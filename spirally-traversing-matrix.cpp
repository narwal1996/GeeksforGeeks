#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--) {
	    int n = 4, m = 4;
	    int a[n][m];
	    for(int i = 0; i < n; i++)
	        for(int j = 0; j < m; j++)
	            cin >> a[i][j];
	    int l = 0, r = m-1, t = 0, b = n-1;
	    while(l < r && t < b) {
	        for(int i = l; i <= r; i++) cout << a[t][i] << " ";
	        l++;
	        for(int i = t+1; i <= b; i++) cout << a[i][r] << " ";
	        t++;
	        for(int i = r-1; i >= l; i--) cout << a[b][i] << " ";
	        r--;
	        for(int i = b; i >= t; i--) cout << a[i][l-1] << " ";
	        b--;
	    }   cout << endl;
	}
	return 0;
}
