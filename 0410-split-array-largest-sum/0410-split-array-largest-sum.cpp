class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> prefixsum(n+1,0);
        for(int i=0;i<n;i++){
            prefixsum[i+1] = prefixsum[i]+nums[i];
        }
        if(k==1){
            return prefixsum[n];
        }
        vector<vector<int>>dp(k+1,vector<int>(n+1));
        for(int i=1;i<n;i++){
            dp[1][i] = prefixsum[i];
        }
        for(int i = 1;i<=k;i++){
            dp[i][1] = nums[0];
        }
        for(int i=2;i<=k;i++){
            for(int j=2;j<=n;j++){
                int best = INT_MAX;
                for(int p=1;p<j;p++){
                    int left = dp[i-1][p];
                    int right = prefixsum[j] - prefixsum[p];
                    int curr = max(left,right);
                    best = min(best,curr);
                }
                dp[i][j] = best;
            }
        }
        return dp[k][n];
    }
};