class Solution {
public:
    string triangleType(vector<int>& nums) {
        if(nums[0]+nums[1] <= nums[2]){
            return "none";
        }
        if(nums[0]+nums[2] <= nums[1]){
            return "none";
        }
        if(nums[1]+nums[2] <= nums[0]){
            return "none";
        }
        unordered_set<int> n(nums.begin(),nums.end());
        if(n.size() == 1){
            return "equilateral";
        }
        else if(n.size()==2){
            return "isosceles";
        }
        return "scalene";
    }
};