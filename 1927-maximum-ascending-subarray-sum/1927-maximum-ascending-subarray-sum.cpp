class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int curr = nums[0] , res = nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){
                curr+=nums[i];
            }
            else{
                curr = nums[i];
            }
            res = max(res,curr);
        }
        return res;
    }
};