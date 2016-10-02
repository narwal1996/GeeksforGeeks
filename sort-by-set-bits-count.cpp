#include<bits/stdc++.h>
using namespace std;

int nbits(int a) {
    int res = 0;
    int num = a;
    while(num) {
        if(num&1)   res++;
        num >>= 1;
    }
    return res;
}

int main() {
	int t, temp;
	cin >>t;
	while(t--) {
	    int n;
	    cin >> n;
	    vector< vector<int> > count(33, vector<int>());
	    for(int i = 0; i < n; i++) {
	        cin >> temp;
	        count[nbits(temp)].push_back(temp);
	    }
	    for(int i = 32; i >= 0; i--) {
	        for(int j = 0; j < count[i].size(); j++)
	            cout << count[i][j] << " ";
	    }
	    cout << endl;
	}
	return 0;
}
