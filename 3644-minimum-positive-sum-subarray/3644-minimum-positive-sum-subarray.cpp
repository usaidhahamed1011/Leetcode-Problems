class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n = nums.size();
        int mini = INT_MAX;
        for(int i=l;i<=r;i++){
            int sum = 0;
            for(int j=0;j<i;j++){
                sum+=nums[j];
            }
            if(sum>0){
                mini = min(mini,sum);
            }
            int tem = sum;
            for(int j=i;j<n;j++){
                tem += nums[j]-nums[j-i];
                if(tem>0) mini = min(mini,tem);
            }
        }
        if(mini == INT_MAX) return -1;
        return mini;
    }
};