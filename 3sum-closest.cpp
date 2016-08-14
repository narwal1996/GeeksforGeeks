/*
  LEETCODE
  Given an array S of n integers, find three integers in S such that the sum is closest to a given number, target. 
  Return the sum of the three integers. You may assume that each input would have exactly one solution.

  Sort the vector and then no need to run O(N^3) algorithm as each index has a direction to move.

  The code starts from this formation.
  
  ----------------------------------------------------
  ^  ^                                               ^
  |  |                                               |
  |  +- second                                     third
  +-first
  
  if nums[first] + nums[second] + nums[third] is smaller than the target, we know we have to increase the sum. 
  So only choice is moving the second index forward.
  
  ----------------------------------------------------
  ^    ^                                             ^
  |    |                                             |
  |    +- second                                   third
  +-first
  
  if the sum is bigger than the target, we know that we need to reduce the sum. so only choice is moving 'third' to backward. 
  Of course if the sum equals to target, we can immediately return the sum.
  
  ----------------------------------------------------
  ^    ^                                          ^
  |    |                                          |
  |    +- second                                third
  +-first
  
  when second and third cross, the round is done so start next round by moving 'first' and resetting second and third.
  
  ----------------------------------------------------
    ^    ^                                           ^
    |    |                                           |
    |    +- second                                 third
    +-first
    
  while doing this, collect the closest sum of each stage by calculating and comparing delta. 
  Compare abs(target-newSum) and abs(target-closest). At the end of the process the three indexes will eventually be
  gathered at the end of the array.
  
  ----------------------------------------------------
                                           ^    ^    ^
                                           |    |    `- third
                                           |    +- second
                                           +-first
  if no exactly matching sum has been found so far, the value in closest will be the answer.
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
