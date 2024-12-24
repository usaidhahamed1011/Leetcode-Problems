class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> res;
        if(nums.empty()) return res;
        int strt = nums[0];
        for(int i=1;i<=nums.size();++i){
            if(i == nums.size() || nums[i]!=nums[i-1]+1){
                if(strt == nums[i-1]){
                    res.push_back(to_string(strt));
                }
                else{
                    res.push_back(to_string(strt) + "->" + to_string(nums[i-1]));
                }
                if(i<nums.size()) strt = nums[i];
            }
        }
        return res;
    }
};