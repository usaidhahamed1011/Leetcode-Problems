class Solution {
public:
    bool isprime(int n){
        if(n<2) return false;
        if(n==2) return true;
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
    int maximumPrimeDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(isprime(nums[i])){
                ans.push_back(i);
            }
        }
        return ans[ans.size()-1] - ans[0];
    }
};