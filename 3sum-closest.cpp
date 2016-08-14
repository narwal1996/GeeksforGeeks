/*
  LEETCODE
  Given an array S of n integers, find three integers in S such that the sum is closest to a given number, target. 
  Return the sum of the three integers. You may assume that each input would have exactly one solution.
*/

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) 
    {
        sort(nums.begin(), nums.end());
        int res = nums[0] + nums[1] + nums[2];
        for(int i = 0; i < nums.size()-2; i++)
        {
            int j = i+1, k = nums.size()-1;
            while(j < k)
            {
                int temp = nums[i]+nums[j]+nums[k];
                if(abs(target-temp) < abs(target-res))
                    res = temp;
                if(temp < target)
                    j++;
                else
                    k--;
            }
        }
        return res;
    }
};
