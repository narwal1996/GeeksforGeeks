/*
  1) Create an array of n strings, arr[n]
  2) Initialize direction as "down" and row as 0. The 
     direction indicates whether we need to move up or 
     down in rows. 
  3) Traverse the input string, do following for every
     character.
     a) Append current character to string of current row.
     b) If row number is n-1, then change direction to 'up'
     c) If row number is 0, then change direction to 'down'
     d) If direction is 'down', do row++.  Else do row--.
  4) One by one print all strings of arr[]. 
*/

#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--) {
	    string s;
	    cin >> s;
	    int n, len=s.length(), row=0;
	    cin >> n;
	    if(n==1) {
	        cout << s << endl;
	        continue;
	    }
	    string a[n];
	    bool down=true;
	    for(int i=0; i<len; i++) {
	        a[row]+=s[i];
	        if(row==n-1)    down=false;
	        else if(row==0) down=true;
	        (down ? row++ : row--);
	    }
	    for(int i=0; i<n; i++)  cout << a[i];
	    cout << endl;
	}
	return 0;
}
