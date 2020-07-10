class Solution {
public:
    int numTeams(vector<int>& ratings) {
        if(ratings.size() < 3)
            return 0;
        int teams = 0;
        for(int i = 0; i < ratings.size() - 2; i++)
        {
            for(int j = i + 1; j < ratings.size() - 1; j++)
            {
                for(int k = j + 1; k < ratings.size(); k++)
                {
                    if(ratings[i] > ratings[j] && ratings[j] > ratings[k] || ratings[i] < ratings[j] && ratings[j] < ratings[k])
                        teams++;
                }
            }
        }
        return teams;
    }
};