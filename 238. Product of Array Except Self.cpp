class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(nums.size(), 1);
        vector<int> L(nums.size(), 1);
        vector<int> R(nums.size(), 1);
        for(int i = 1; i < L.size(); i++)
        {
            L[i] = L[i - 1] * nums[i - 1];
        }
        for(int i = R.size() - 2; i >= 0; i--)
        {
            R[i] = R[i + 1] * nums[i + 1];
        }
        
        for(int i = 0; i < nums.size(); i++)
        {
            ans[i] = L[i] * R[i];
        }
        return ans;
    }
};