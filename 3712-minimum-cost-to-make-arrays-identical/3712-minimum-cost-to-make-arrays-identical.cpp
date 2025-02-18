class Solution {
public:
    long long calc(vector<int>& arr, vector<int>& brr){
        int n = arr.size();
        long long adjustmentCost = 0;
        for (int i = 0; i < n; ++i) {
            adjustmentCost += abs(arr[i] - brr[i]);
        }
        
        return adjustmentCost;
    }
    long long minCost(vector<int>& arr, vector<int>& brr, long long k) {
        long long ans = calc(arr,brr);
        sort(arr.begin(), arr.end());
        sort(brr.begin(), brr.end());
        ans = min(ans,calc(arr,brr)+k);
        return ans;
    }
};