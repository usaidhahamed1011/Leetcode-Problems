class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<int>> dp(3, vector<int>(n));
        
        for(int i=1;i<=2;i++){
            int maxdif = -prices[0]; 
            for(int j=1;j<n;j++){
                dp[i][j] = max(dp[i][j-1],prices[j]+maxdif);
                maxdif = max(maxdif,dp[i-1][j]-prices[j]);
            }
        }
        return dp[2][n-1];
    }
};