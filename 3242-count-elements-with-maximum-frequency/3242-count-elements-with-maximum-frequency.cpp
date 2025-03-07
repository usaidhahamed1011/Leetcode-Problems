class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> mp;
        int maxi = INT_MIN;
        int ans = 0;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto num : mp){
            if(num.second>maxi){
                maxi = num.second;
            }
        }
        for(auto i : mp){
            if(i.second == maxi){
                ans+=i.second;
            }
        }
        return ans;
    }
};