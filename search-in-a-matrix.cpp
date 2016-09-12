#include<bits/stdc++.h>

using namespace std;

bool check(vector<vector<int> > &a, int x) {
    int i = a.size()-1, j = 0;
    while(i >= 0 && j <= a[0].size()-1) {
        if(x > a[i][j]) j++;
        else if(x < a[i][j])    i--;
        else    return true;
    }
    return false;
}

int main()
{
    int t;
    cin >> t;
    while(t--) {
    	int n, m;
    	cin >> n >> m;
    	vector<vector<int> > a(n, vector<int>(m));
    	for(int i = 0; i < n; i++) {
    	    for(int j = 0; j < m; j++) {
    	        int temp;
    	        cin >> temp;
    	        a[i][j] = temp;
    	    }
    	}
        int x;  cin >> x;
        cout << check(a, x) << endl;
    }
	return 0;
}
