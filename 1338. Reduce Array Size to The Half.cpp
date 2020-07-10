class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int> m;
        for(int i : arr)
        {
            m[i]++;
        }  
        
        vector<int> s;
        
        for(auto &it : m)
        {
             s.push_back(it.second);
        }
        sort(s.begin(), s.end(), [](int x, int y)
             {
                 return x > y;
             });
        if(s.size() == 1) return 1;
        int n = arr.size();
        int res = 0;
        for(int i : s)
        {
            if(n <= arr.size()/2)
                return res;
            n = n - i;
            res++;
        }
        return 0;
    }
};