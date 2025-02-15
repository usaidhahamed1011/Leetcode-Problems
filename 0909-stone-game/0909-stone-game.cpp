class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        return piles.size() * piles.size() +1 % gcd(piles.size()/2,piles[1]);
    }
};