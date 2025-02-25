class Solution {
public:
    long long sumDigitDifferences(vector<int>& nums) {
        long long sum = 0;
        int count = 0;
        int a = nums[0];
        while (a) {
            count++;
            a /= 10;
        }
        vector<vector<long long>> v(count, vector<long long>(10, 0));

        for(auto val : nums) {
            string s = to_string(val); 
            for(int i = 0; i < s.size(); i++) {
                v[i][s[i] - '0']++;
            }
        }

        for(int i = 0; i<count; i++) {
            for(int j = 0; j < 10; j++) {
                for(int k = j+1; k < 10; k++) {
                    sum += (v[i][j]*v[i][k]);
                }
            }
        }

        return sum;
    }
};