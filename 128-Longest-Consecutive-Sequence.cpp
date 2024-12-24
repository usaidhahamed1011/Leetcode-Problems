class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n<2) return n;
        sort(nums.begin(),nums.end());
        int ans = 1 , count = 1;
        for(int i=1;i<n;i++){
            if(nums[i] == nums[i-1]) continue;
            if(nums[i] == nums[i-1]+1){
                count+=1;
                ans = max(ans , count);
            }
            else{
                count =1;
            }
        }
        return ans;
    }
};