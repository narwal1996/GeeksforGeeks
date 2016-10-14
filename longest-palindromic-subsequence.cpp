#include<bits/stdc++.h>
using namespace std;
int main() {
    string s="geeks for geeks";
    int n=s.length();
    int dp[n][n];
    for(int k=0; k<n; k++) {
        for(int i=0; i<n-k; i++) {
            int j=i+k;
            if(s[i]==s[j]) {
                if(j-i==0)  dp[i][j]=1;
                else if(j-i==1) dp[i][j]=2;
                else    dp[i][j]=dp[i+1][j-1]+2;
            } else    dp[i][j]=max(dp[i+1][j], dp[i][j-1]);
        }
    }
    cout << dp[0][n-1] << endl;
	return 0;
}

