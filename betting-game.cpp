#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
    	string str;
    	cin >> str;
    	int sum = 4, bet = 1;
    	bool ok = true;
    	for(int i = 0; i < str.length(); i++)
    	{
    	    if(str[i] == 'W' && sum >= bet)
    	    {
    	        sum += bet;
    	        bet = 1;
    	    }
    	    else if(str[i] == 'L' && sum >= bet)
    	    {
    	        sum -= bet;
    	        bet *= 2;
    	        
    	    }
    	    else
    	    {
    	        cout << -1 << endl;
    	        ok = false;
    	        break;
    	    }
    	}
    	if(ok)
    	    cout << sum << endl;
    }
	return 0;
}
