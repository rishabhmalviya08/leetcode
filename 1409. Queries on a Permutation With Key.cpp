class Solution {
public:
    vector<int> processQueries(vector<int>& queries, int m) {
        vector<int> p;
        
        for(int i = 0; i < m; i++)
        {
            p.push_back(i+1);
        }
        
        vector<int> ans;
        
        for(int i = 0; i < queries.size(); i++)
        {
            for(int j = 0; j < p.size(); j++)
            {
                if(queries[i] == p[j])
                {
                    ans.push_back(j);
                    int temp = p[j];
                    for(int k = j; k>= 1; k--)
                    {
                        p[k] = p[k - 1];
                    }
                    p[0] = temp;
                    
                }
            }
        }
        return ans;
    }
};