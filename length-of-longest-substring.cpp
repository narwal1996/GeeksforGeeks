#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--) {
	    string s;
	    cin >> s;
	    int freq[26];
	    memset(freq, 0, sizeof(freq));
	    int n=s.length(), res=0, len=0;
	    for(int i=0; i<n; i++) {
	        int j=i;
	        while(freq[s[j]-'a']<1 && j<n) {
                len++;
                freq[s[j++]-'a']++;
	        }
	        res=max(res,len);
	        len=0;
	        memset(freq, 0, sizeof(freq));
	    }
	    cout << res << endl;
	}
	return 0;
}
