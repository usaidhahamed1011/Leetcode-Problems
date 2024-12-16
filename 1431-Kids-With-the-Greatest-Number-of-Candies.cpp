class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        int maxi = *max_element(candies.begin(),candies.end());
        vector<bool> result(n);
         n=0;
        for(int i : candies){
            if(i+extraCandies >= maxi){
                result[n++] = true;
            }
            else{
                result[n++] = false;
            }
        }
        return result;
    }
};