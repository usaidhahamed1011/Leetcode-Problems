class Solution {
public:
    bool check(int n,int sum,vector<int>& arr,vector<vector<int>>& dp){
        if(sum==0) return true;
        if(n==0) return false;
        if(dp[n-1][sum]!=-1){
            return dp[n-1][sum];
        }
        if(arr[n-1]>sum){
            return dp[n-1][sum] = check(n-1,sum,arr,dp);
        }
        return dp[n-1][sum] = check(n-1, sum, arr, dp) || check(n-1, sum - arr[n-1], arr, dp);
    }
    bool canPartition(vector<int>& nums) {
        int sum = accumulate(nums.begin(), nums.end(),0);
        int n = nums.size();
        vector<vector<int>> dp(n, vector<int>(sum + 1, -1));
        if (sum % 2 != 0)
            return false;
        return check(n, sum / 2, nums, dp);
    }
};