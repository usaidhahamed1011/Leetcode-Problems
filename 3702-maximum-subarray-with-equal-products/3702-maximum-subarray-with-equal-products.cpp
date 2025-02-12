class Solution {
public:
    int maxLength(vector<int>& nums) {
        int n = nums.size();
        int result = 0;
        for(int i=0;i<n;i++){
            long long gcdval = nums[i], lcmval = nums[i],maxlcm = 100000000000,prod=1;
            for(int j=i;j<n;j++){
                prod*=(long long)nums[j];
                if(prod>maxlcm) break;
                gcdval = gcd(gcdval,(long long)nums[j]);
                lcmval = lcm(lcmval,(long long)nums[j]);
                if(prod == lcmval*gcdval) result = max(result,j-i+1);
            } 
        }
        return result;

    }
};