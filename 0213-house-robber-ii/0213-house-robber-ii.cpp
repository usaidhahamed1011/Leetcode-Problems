class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(),0);
        if(nums.size()==1) return nums[0];
        return max(findmax(nums,0,nums.size()-2),findmax(nums,1,nums.size()-1));
    }
private:
    int findmax(vector<int>& nums,int start,int end){
        int prerob = 0, maxrob = 0;
        for(int i=start;i<=end;i++){
            int temp = max(maxrob , prerob+nums[i]);
            prerob = maxrob;
            maxrob = temp;
        }
        return maxrob;
    }
};