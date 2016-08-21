/*
  LEETCODE
  Given a non-empty array of integers, return the k most frequent elements.
  For example,
  Given [1,1,1,2,2,3] and k = 2, return [1,2].
  
  1. Use a Hash table to record all words' frequency T(n) = O(n)
  2. Choose first k elements of hash table, and restore them in one buffer (whose space = k). T(n) = O(k)
  3. Each time, firstly we need find the current min element of the buffer, and just compare the min element of the buffer with the
     (n - k) elements of hash table one by one. If the element of hash table is greater than this min element of buffer, then drop the
     current buffer's min, and add the element of the hash table. So each time we find the min one in the buffer need T(n) = O(k), 
     and traverse the whole hash table need T(n) = O(n - k). So the whole time complexity for this process is T(n) = O((n-k) * k).
  4. After traverse the whole hash table, the result is in this buffer.
  5. The whole time complexity: T(n) = O(n) + O(k) + O(kn - k^2) = O(kn + n - k^2 + k). Since, k is really smaller than n in general.
     So for this solution, the time complexity is T(n) = O(kn). That is linear time, when k is really small. Is it right?
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
