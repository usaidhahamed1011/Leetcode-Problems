class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        vector<bool> ans;
        vector<int> result(nums.size(),0);
        for(int i = 1;i<nums.size();i++){
            if(nums[i]%2 != nums[i-1]%2){
                result[i] = result[i-1]+1;
            }
            else{
                result[i] = 0;
            }
        }
        for(auto i : queries){
            if(i[1] - i[0] == result[i[1]] - result[i[0]]){
                ans.push_back(true);
            }
            else{
                ans.push_back(false);
            }
        }
        return ans;
    }
};