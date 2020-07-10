class Solution {
public:
    vector<int> countBits(int num) {
        if(num == 0)
        {
            vector<int> n(1,0);
            return n;
        }
        vector<int> dp(num + 1, 0);
        dp[1] = 1;
        for(int i = 2; i <= num; i++)
        {
            if(i % 2 == 0) 
                dp[i] = dp[i/2];
            else
                dp[i] =  dp[i/2] + 1;
        }
        return dp;
    }
};

 