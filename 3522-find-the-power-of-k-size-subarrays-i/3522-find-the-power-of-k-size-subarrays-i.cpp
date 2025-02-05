class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans(n,1);
        vector<int> result(n-k+1,-1);
        for(int i=1;i<n;i++){
            if(nums[i]-nums[i-1] == 1){
                ans[i] = ans[i-1]+1;
            }
        }
        for(int i=0;i<n;i++){
            if(ans[i]>=k){
                result[i-k+1] = nums[i];
            }
        }
        return result;
    } 
};