class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> lis(nums.size(), 1);
        for(int i = 1; i < nums.size(); i++)
        {
            for(int j = 0; j < i; j++)
            {
                if(nums[i] > nums[j] && lis[i] < lis[j] + 1)
                {
                    lis[i] = lis[j] + 1;
                }
            }
        }
        int ans = 0;
        for(auto i : lis)
        {
            if(i > ans)
                ans = i;
        }
        
        return ans;
    }
};