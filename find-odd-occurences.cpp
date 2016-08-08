#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    int a[n];
	    map<int, int> m;
	    map<int, int>::iterator it;
	    for(int i = 0; i < n; i++)
	    {
	        cin >> a[i];
	        if(m.find(a[i]) == m.end())
	            m[a[i]] = 1;
	        else
	            m[a[i]]++;
	    }
	    for(it = m.begin(); it != m.end(); it++)
	    {
	        if((it->second)%2 != 0)
	        {
	            cout << (it->first) << endl;
	            break;
	        }
	    }
	}
	return 0;
}
