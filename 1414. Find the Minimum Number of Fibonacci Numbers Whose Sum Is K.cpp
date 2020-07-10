class Solution {
public:
    
    int findMinFibonacciNumbers(int k) {
        vector<int> v;
        v.push_back(1);
        int f1 = 1, f2 = 1;
        while(f1 <= k)
        {
            int f = f1 + f2;
            v.push_back(f);
            f2 = f1;
            f1 = f;
        }
        int i = 0, j = v.size()-1;
        while(k > 0)
        {
            while(k >= v.back())
            {
                k = k - v.back();
                i++;
            }
            v.pop_back();
        }
        return i;
    }
};