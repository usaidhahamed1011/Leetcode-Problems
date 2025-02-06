class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        std::unordered_map<int,int> mp;
        int count =0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                int prod = nums[i]*nums[j];
                count+=(mp[prod]*8);
                mp[prod]++;
            }
        }
        return count;
    }
};