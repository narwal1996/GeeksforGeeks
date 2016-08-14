/* LEETCODE 
   Given an array of integers, return indices of the two numbers such that they add up to a specific target. 
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        map<int,int> m;
        for(int i = 0; i < (int)nums.size(); i++)
        {
            int k = target - nums[i];
            if(m.find(k) != m.end())
                return {m[k], i};
            m[nums[i]] = i;
        }
        return vector<int> ();
    }
};
