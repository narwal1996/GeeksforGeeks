#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    vector<int> sieve(11, 1);
    sieve[0] = sieve[1] = 0;
    for(int i = 2; i <= 10; i++) {
        if(sieve[i] == 1) {
            int temp = 2*i;
            while(temp <= 10) {
                sieve[temp] = 0;
                temp += i;
            }
        }
    }
    while(t--) {
        int n;
        long long res = 1;
        cin >> n;
        unordered_map<int,int> m;
        for(int i = 2; i <= n; i++) {
            int temp = i;
            for(int k = 2; k <= sqrt(temp); k++) {
                if(sieve[k] == 1) {
                    while(temp%k == 0) {
                        m[k]++;
                        temp /= k;
                    }
                }
            }
            if(temp > 1)    m[temp]++;
        }
        for(auto it = m.begin(); it != m.end(); it++)
            res *= (it->second + 1);
        cout << res << endl;
    }
	return 0;
}
