class Solution {
public:
    int getLargestOutlier(vector<int>& nums) {
        int sum = 0;
        for(int num : nums){
            sum+=num;
        }
        int ans = INT_MIN;
        multiset<int> ms(nums.begin(),nums.end());
        for(int num : nums){
            if((sum-num)%2 == 0){
                ms.erase(ms.find(num));
                int a = (sum-num)/2;
                if(ms.find(a)!=ms.end()){
                    ans = max(ans,num);
                }
                ms.insert(num);
            }
        }
        return ans;
    }
};