#include <bits/stdc++.h>

using namespace std;

long long int gcd(long long int a, long long int b)
{
    return (b == 0 ? a : gcd(b, a%b));
}

long long int lcm(long long int a, long long int b)
{
    return (a*b)/gcd(a, b);
}

long long int ans(long long int n)
{
    if(n == 0 || n == 1 || n == 2)
        return n;
    if(n%2 != 0)
    {
        long long int temp = n*(n-1)*(n-2);
        return temp;
    }
    long long int max = (n-1)*(n-2)*(n-3);
    int temp = (n-20 > sqrt(n)) ? n-20 : sqrt(n);
    for(long long int i = temp; i <= n-2; i++)
    {
        for(long long int j = temp+1; j <= n-1; j++)
        {
            for(long long int k = temp+2; k <= n; k++)
            {
                long long int a = lcm(i, lcm(j, k));
                if(a > max)
                    max = a;
            }
        }
    }
    return max;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int n;
        cin >> n;
        long long int temp = ans(n);
        cout << temp << endl;
    }
	return 0;
}
