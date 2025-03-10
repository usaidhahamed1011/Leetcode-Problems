class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        int sum = 0;
        for (auto& num : nums) {
            int maxi = INT_MIN, count = 0;
            while(num){
                maxi = max(maxi , num%10);
                num = num/10;
                count+=1;
            }
            while(count--){
                num = num*10+maxi;
            }
            sum+=num;
        }
        return sum;
    }
};