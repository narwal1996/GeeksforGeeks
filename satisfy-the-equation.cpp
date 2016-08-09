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
	    for(int i = 0; i < n; i++)
	        cin >> a[i];
	    map<int, pair<int, int> > m;
	    vector<vector<int> > ans;
	    int len = 0;
	    bool ok = true;
	    for(int i = 0; i < n-1; i++)
	    {
	        for(int j = i+1; j < n; j++)
	        {
	            int sum = a[i]+a[j];
	            if(m.find(sum) == m.end())
	                m[sum] = make_pair(i, j);
	            else
	            {
	                vector<int> temp;
	                if(m[sum].first != i && m[sum].second != j && m[sum].second != i)
	                {
    	                temp.push_back(m[sum].first);
    	                temp.push_back(m[sum].second);
    	                temp.push_back(i);
    	                temp.push_back(j);
                        ans.push_back(temp);
                        len++;
	                }
	            }
	        }
	    }
	    if(ans.empty())
	    {
	        cout << "no pairs";
	        goto label;
	    }
	    sort(ans.begin(), ans.end());
	    for(int i = 0; i < 4; i++)
	        cout << ans[0][i] << " ";
	    label:
	    cout << endl;
	}
	return 0;
}
