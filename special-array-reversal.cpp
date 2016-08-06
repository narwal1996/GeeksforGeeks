#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
    	string str, temp;
    	cin >> str;
    	int n = str.length();
    	for(int i = 0; i < n; i++)
    	    if(isalnum(str[i]))
    	        temp += str[i];
    	int len = temp.length(), count = 0;
    	for(int i = 0; i < n; i++)
    	{
    	    if(isalnum(str[i]))
    	        str[i] = temp[len - 1 - count++];
    	}
    	cout << str << endl;
    }
	return 0;
}
