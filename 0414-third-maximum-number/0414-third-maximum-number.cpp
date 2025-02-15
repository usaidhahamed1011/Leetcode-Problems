class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        if(s.size()>=3){
            int ans = s.size()-3;
            auto it = next(s.begin(),ans);
            return *it;
        }
        return *--s.end();
    }
};