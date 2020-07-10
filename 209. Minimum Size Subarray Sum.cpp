class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        if(nums.size() == 0) return 0;
        vector<int> psum(nums.size()+1, 0);
        psum[0] = 0;
        for(int i = 1; i < nums.size()+1; i++)
        {
            psum[i] = nums[i - 1] + psum[i-1];
        }
        int ans = INT_MAX;
        for(int i = 1; i < nums.size()+1; i++)
        {
            auto bound = lower_bound(psum.begin(), psum.end(),s + psum[i-1]);
            if(bound != psum.end())
                ans = min(ans, static_cast<int>(bound - (psum.begin() + i - 1)));
        }
        if(ans == INT_MAX) return 0;
        return ans;
    }
};