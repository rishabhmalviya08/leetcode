class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int alex = 0, lee = 0, i = 0;
        while(i < piles.size())
        {
            alex = alex + max(piles[i],piles[piles.size() - 1]);
            if(piles[piles.size() - 1] >= piles[i])
            {
                alex = alex + piles[piles.size() - 1];
                piles.pop_back();
            }
            else
                alex = alex + piles[i++];
            if(piles[piles.size() - 1] >= piles[i])
            {
                lee = lee + piles[piles.size() - 1];
                piles.pop_back();
            }
            else
                lee = lee + piles[i++];
        }
        return alex > lee;
    }
};