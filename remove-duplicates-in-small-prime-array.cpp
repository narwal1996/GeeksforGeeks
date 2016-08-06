/*you need to complete this function*/
#include<bits/stdc++.h>

void removeDuplicate(vector<int> &vect)
{
    map<int,bool> m;
    int index = 0;
    vector<int> ans(vect.begin(), vect.end());
    for(int i = 0; i < ans.size(); i++)
    {
        if(m.find(ans[i]) == m.end())
        {
            m[ans[i]] = true;
            vect[index++] = ans[i];
        }
    }
    vect.erase(vect.begin()+index, vect.end());
}
