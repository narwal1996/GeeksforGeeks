#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n,a,b;
	    cin>>n>>a>>b;
	    long long int dp[n+1];
	    dp[0]=0;
	    for(int i=1; i<=n; i++) {
	        if(i%2==0)  dp[i]=min(dp[i/2]+b,dp[i-1]+a);
	        else    dp[i]=min(dp[(i+1)/2]+a+b,dp[i-1]+a);
	    }
	    cout << dp[n]<<endl;
	}
	return 0;
}
