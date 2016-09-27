#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--) {
        string n;
        cin >> n;
        int len = (int)n.size();
        if(len == 1) {
            if((int)(n[0]-'0')%8 == 0)  cout << "YES" << endl;
            else    cout << "NO" << endl;
        } else if(len == 2) {
            int temp = (int)(n[0]-'0');
            temp = (temp*10 + (int)(n[1]-'0'));
            int temp1 = temp%10;
            temp1 = (temp1*10 + temp/10);
            if(temp%8 == 0 || temp1%8 == 0)  cout << "YES" << endl;
            else    cout << "NO" << endl;
        } else {
            bool found = false;
            for(int i = 0; i < len; i++) {
                for(int j = 0; j < len; j++) {
                    for(int k = 0; k < len; k++) {
                        if(i != j && j != k && i != k) {
                            int temp = (int)(n[i]-'0');
                            temp = (temp*10 + (int)(n[j]-'0'));
                            temp = (temp*10 + (int)(n[k]-'0'));
                            if(temp%8 == 0) {
                                found = true;
                                cout << "YES" << endl;
                                break;
                            }
                        }
                    } if(found)   break;
                } if(found)   break;
            }
            if(!found)  cout << "NO" << endl;
        }
    }
}
