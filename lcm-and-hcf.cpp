#include<bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    return (b == 0 ? a : gcd(b, a%b));
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
	    int a, b;
	    cin >> a >> b;
	    cout << (a*b)/gcd(a,b) << " " << gcd(a,b);
	    cout << endl;
	}
	return 0;
}
