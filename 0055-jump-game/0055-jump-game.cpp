class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int dist = 0;
        for(int i=0;i<n;i++){
            dist = max(dist,nums[i]+i);
            if(dist>=n-1){
                break;
            }
            if(i==dist){
                return false;
            }
            
        }
        return true;
    }
};