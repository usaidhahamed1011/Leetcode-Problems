class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n = nums.size();
        int maxres = INT_MIN,minres = INT_MAX;
        int sum = 0;
        for(int num : nums){
            sum+=num;
            sum = max(sum,0);
            maxres = max(maxres,sum);
        }
        sum =0;
        for(int num : nums){
            sum+=num;
            sum = min(sum,0);
            minres = min(minres,sum);
        }
        minres = -minres;
        return max(maxres,minres);
    }
};