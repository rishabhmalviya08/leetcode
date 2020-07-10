class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        for(int i = 0; i < nums.size(); i++)
        {
            
            int x = abs(nums[i]) - 1;
            nums[x] = -1*nums[x];
            if(nums[x] > 0)
            {
                ans.push_back(abs(nums[x]));
            }
        }
        return ans;
    }
};