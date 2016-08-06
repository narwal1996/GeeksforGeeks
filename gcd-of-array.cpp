#include<bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    return b==0 ? a : gcd(b,a%b);
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
	    int n, GCD;
	    cin >> n;
	    int a[n];
	    for(int i = 0; i < n; i++)
	        cin >> a[i];
	    GCD = a[0];
	    for(int i = 1; i < n; i++)
	        GCD = gcd(GCD, a[i]);
	    cout << GCD << endl;
	}
	return 0;
}
