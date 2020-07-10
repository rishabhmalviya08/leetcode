class Solution {
public:
    bool isVowel(char ch)
    {
         if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
             return true;
        return false;
    }
    int maxVowels(string s, int k) {
        int i = 0, v = 0, maxi = 0;
        
        while(i < s.length())
        {
            if(i >= k)
            {
                if(isVowel(s[i - k]))
                    v--;
            }
            if(isVowel(s[i++]))
            {
                v++;
            }
            maxi = max(v, maxi);
        }
        return maxi;
    }
};