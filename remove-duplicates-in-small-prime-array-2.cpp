/*you need to complete this function*/
#include<bits/stdc++.h>

void removeDuplicate(vector<int> &vect)
{
    long long int product = vect[0];
    int idx = 1;
    for(int i = 1; i < vect.size(); i++)
    {
        if(product%vect[i] != 0)
        {
            vect[idx++] = vect[i];
            product *= vect[i];
        }
    }
    vect.erase(vect.begin()+idx, vect.end());
}
