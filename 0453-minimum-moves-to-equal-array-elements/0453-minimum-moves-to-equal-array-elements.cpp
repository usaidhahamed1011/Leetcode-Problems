class Solution {
public:
    int minMoves(vector<int>& nums) {
        int m = INT_MAX;
        for(int i:nums){
            m = min(m,i);
        }
        int ans=0;
        for(int i : nums){
            ans+=i-m;
        }
        return ans;
    }
};