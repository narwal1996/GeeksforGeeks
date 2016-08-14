/*
  LEETCODE
  Given an array S of n integers, are there elements a, b, c in S such that a + b + c = 0?
  Find all unique triplets in the array which gives the sum of zero.
*/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        vector<vector<int> > ans;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < (int)nums.size(); i++)
        {
            int target = -nums[i];
            int j = i+1, k = nums.size()-1;
            while(j < k && j < nums.size() && k > i)
            {
                int sum = nums[j]+nums[k];
                if(sum < target)
                    j++;
                else if(sum > target)
                    k--;
                else
                {
                    vector<int> temp = {nums[i], nums[j], nums[k]};
                    ans.push_back(temp);
                    while(j < k && nums[j] == temp[1])
                        j++;
                    while(j < k && nums[k] == temp[2])
                        k--;
                }
            }
            while(i+1 < nums.size() && nums[i+1] == -target)
                i++;
        }
        return ans;
    }
};
