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
        int k, count = 0;
        cin >> k;
        map<int, bool> m;
        for(int i = 0; i < n-1; i++)
            m[a[i]] = true;
        if(k == 0)
            cout << n - m.size() << endl;
        else
        {
            for(int i = 0; i < n; i++)
            {
                if(m[a[i]+k])
                    count++;
                if(m[a[i]-k])
                    count++;
                m[a[i]] = false;
            }
        }
        cout << count << endl;
    }
	return 0;
}
