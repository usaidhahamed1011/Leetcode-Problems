class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxlen = 0;
        int left = 0;
        int zc = 0;
        for (int i = 0; i < nums.size(); i++) {
            if(nums[i] == 0){
                zc++;
            }
            while(zc>k){
                if(nums[left] == 0){
                    zc--;
                }
                left++;
            }
            maxlen = max(maxlen,i-left+1);
        }
        return maxlen;
    }
};