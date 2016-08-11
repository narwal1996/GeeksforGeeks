#include<bits/stdc++.h>

using namespace std;

bool check(int n)
{
    if(n == 1)
        return true;
    int sum = 0;
    for(int i = 2; i <= sqrt(n); i++)
        if(n%i == 0)
            sum += i + (n/i);
    if((int)sqrt(n) * (int)sqrt(n) == n)
        sum -= sqrt(n);
    sum += 1;
    if(sum == n)
        return true;
    return false;
}

int main()
{
    int t;
    cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    cout << check(n) << endl;
	}
	return 0;
}
