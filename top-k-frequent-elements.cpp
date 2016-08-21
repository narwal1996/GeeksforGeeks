/*
  LEETCODE
  Given a non-empty array of integers, return the k most frequent elements.
  For example,
  Given [1,1,1,2,2,3] and k = 2, return [1,2].
*/

class Solution
{
public:
    vector<int> topKFrequent(vector<int>& nums, int k)
    {
        vector<int> res;
        map<int,int> m;
        for(int i = 0; i < nums.size(); i++)
            m[nums[i]]++;
        priority_queue<pair<int,int>, vector<pair<int, int> >, greater<pair<int, int> > > pq;
        auto it = m.begin();
        while(k--)
        {
            pq.push({it->second, it->first});
            it++;
        }
        while(it != m.end())
        {
            if(it->second > pq.top().first)
            {
                pq.pop();
                pq.push({it->second, it->first});
            }
            it++;
        }
        while(!pq.empty())
        {
            res.push_back(pq.top().second);
            pq.pop();
        }
        return res;
    }
};
