class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size = 1;
        for(int i=1;i<nums.size();i++){
            if(size==1 || nums[i]!=nums[size-2]){
                nums[size] = nums[i];
                size++;
            }
        }
        return size;
    }
};