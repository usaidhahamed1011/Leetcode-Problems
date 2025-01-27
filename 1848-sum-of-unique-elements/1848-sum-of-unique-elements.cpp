class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        vector<int> d(101,0);
        for(int i=0;i<nums.size();i++){
            d[nums[i]]++;
        }
        int sum=0;
        for(int i=0;i<101;i++){
            if(d[i] == 1){
                sum+=i;
            }
        }
        return sum;
    }
};