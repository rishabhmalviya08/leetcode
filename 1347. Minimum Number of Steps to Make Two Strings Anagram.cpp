class Solution {
public:
    int minSteps(string s, string t) {
        vector<int> charfreq(26,0);
        int res = 0;
        for(int i = 0; i < s.length(); i++)
        {
            charfreq[s[i] - 'a']++;
            charfreq[t[i] - 'a']--;
        }
        for(int i : charfreq)
        {
            if(i > 0)
                res = res + i;
        }
        return res;
        
    }
};