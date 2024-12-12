class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size()-1;
        for(int i=nums.size()-1;i>=0;i--){
            int d = i+nums[i];
            if(d>=n){
                n=i;
            }
        }
        return n==0;
    }
};