class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int l= 0;
        int r = 0;
        int sum =0;
        int minsize = INT_MAX;
        while(r<n){
            sum = sum+nums[r];
            while(sum>=target){
                minsize = min(minsize , r-l+1);
                sum = sum - nums[l];
                l++;
            }
            r++;
        }
        if(minsize == INT_MAX) return 0;
        return minsize;
    }
};