#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n,m;
        cin >> n >> m;
        long long int a[n], b[m];
        for(int i=0; i<n; i++)  cin >> a[i];
        for(int i=0; i<m; i++)  cin >> b[i];
        long long int dp[n+1][m+1];
        for(int i=0; i<=n; i++) {
            for(int j=0; j<=m; j++) {
                if(i==0 || j==0 || i<j) dp[i][j]=0;
                else if(i==j)    dp[i][j]=dp[i-1][j-1]+a[i-1]*b[j-1];
                else    dp[i][j]=max(dp[i-1][j-1]+a[i-1]*b[j-1], dp[i-1][j]); 
            }
        }
        cout << dp[n][m] << endl;
    }
	return 0;
}
