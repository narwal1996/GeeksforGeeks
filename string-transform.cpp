#include<bits/stdc++.h>
using namespace std;

int string_transform(string a, string b) {
    vector<int> frequency(26, 0);
    if(a.length() != b.length())    return -1;
    for(int i = 0; i < a.length(); i++) frequency[a[i]-'a']++;
    for(int i = 0; i < b.length(); i++) frequency[b[i]-'a']--;
    for(int i = 0; i < 26; i++)
        if(frequency[i] != 0)   return -1;
    int i = a.length(), j = b.length(), res = 0;
    while(i >= 0 && j >= 0) {
        while(i >= 0 && a[i] != b[j]) {
            i--;
            res++;
        }
        if(i >= 0) {
            i--;
            j--;
        }
    }
    return res;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        string a, b;
        cin >> a >> b;
        cout << string_transform(a,b) << endl;
    }
	return 0;
}

