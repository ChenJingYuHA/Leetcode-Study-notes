/*
 * @lc app=leetcode.cn id=66 lang=cpp
 *
 * [66] 加一
 */

// @lc code=start
class Solution {
public:
    vector<int> plusOne(vector<int>& nums) {
        if(nums[nums.size()-1]!=9){    //没有9
            nums[nums.size()-1]++;
            return nums;
        }
        bool flag=false;
        for(int i=0;i<nums.size();i++){    //全是9
            if(nums[i]!=9) flag=true;
        }
        if(flag==false){
            vector<int> HL;
            HL.push_back(1);
            for(int i=0;i<nums.size();i++){
                HL.push_back(0);
            }
            return HL;
        }          
        nums[nums.size()-1]++;   //有点9
        for(int i=nums.size()-1;i>0;i--){
            if(nums[i]==10){
                nums[i]=0;
                nums[i-1]++;
            }
        }
        return nums;
    }
};
// @lc code=end

