#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--) {
	    int n, m, idx = 0, res = 0;
	    cin >> n >> m;
	    priority_queue<int> pq;
	    for(int i = 0; i < n; i++) {
	        int temp;
	        cin >> temp;
	        if(temp < 0)    pq.push(abs(temp));
	    }
	    while(!pq.empty() && m--) {
	        res += pq.top();
	        pq.pop();
	    }
	    cout << res << endl;
	}
	return 0;
}
