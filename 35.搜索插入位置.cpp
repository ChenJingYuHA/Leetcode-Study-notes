/*
 * @lc app=leetcode.cn id=35 lang=cpp
 *
 * [35] 搜索插入位置
 */

// @lc code=start
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        bool flag = false;
        int k = 0;
        for (int i = 0; i < nums.size();i++)
        {
            if(nums[i]==target)
            {
                k=i;
                break;
            }
            else
                flag = true;
        }
        if(flag == true)
        {
            for (int i = 0; i < nums.size()-1;i++)
            {
                if(nums[i]<target&&nums[i+1]>target)
                {
                    k=i+1;
                    flag = false;
                    break;
                }
                if(target>nums[nums.size()-1])
                {
                    k=nums.size();
                    flag = false;
                    break;
                }
            }
        }
        if(nums.size()==1)
        {
            if(target>nums[0])
                k = 1;
            else
                k = 0;
        }
        return k;
    }
};
// @lc code=end

