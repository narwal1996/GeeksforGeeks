#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    int coins[] = {1000, 500, 100, 50, 20, 10, 5, 2, 1};
    while(t--) {
        int n, m, res = 0;
        cin >> n >> m;
        int temp = n;
        for(int i = 0; i < 9; i++) {
            while(temp >= coins[i] && res < m) {
                res++;
                temp -= coins[i];
            }
            if(res == m)    break;
        }
        cout << temp << endl;
    }
}
