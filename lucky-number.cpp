#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
        int n = str.length();
        map<int, bool> m;
        bool ok = true;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n-i; j++)
            {
                int prod = 1;
                string s = str.substr(j, i+1);
                for(int k = 0; k < s.length(); k++)
                    prod *= (s[k] - '0');
                if(m.find(prod) != m.end())
                {
                    ok = false;
                    break;
                }
                else
                    m[prod] = true;
            }
            if(!ok)
                break;
        }
        if(ok)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
	return 0;
}
