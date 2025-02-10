class Solution {
public:
    int minElement(vector<int>& nums) {
        int n = nums.size();
        int mini = INT_MAX;
        for(int i=0;i<n;i++){
            int n1 = nums[i];
            int sum =0;
            while(n1>0){
                sum+=(n1%10);
                n1/=10;
            }
            mini = min(mini,sum);
        }
        return mini;
    }
};