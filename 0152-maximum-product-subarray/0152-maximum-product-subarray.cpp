class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int res = *max_element(nums.begin(),nums.end());
        int cmax = 1,cmin=1;
        for(int i : nums){
            int temp = i*cmax;
            cmax = max({temp,i*cmin,i});
            cmin = min({temp,i*cmin,i});
            res = max(cmax ,res);
        }
        return res;
    }
};