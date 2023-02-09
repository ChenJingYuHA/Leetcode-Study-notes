/*
 * @lc app=leetcode.cn id=118 lang=cpp
 *
 * [118] 杨辉三角
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v(numRows);
        for(int i=0;i<numRows;i++)
        {
            for(int j=0;j<i+1;j++)
            {
                if(j==i)
                {
                    v[i].push_back(1);
                }
                else if(j==0)
                {
                    v[i].push_back(1);
                }
                else
                {
                    v[i].push_back(v[i-1][j]+v[i-1][j-1]);
                }
                
            }
        }
        return v;
    }
};
// @lc code=end

