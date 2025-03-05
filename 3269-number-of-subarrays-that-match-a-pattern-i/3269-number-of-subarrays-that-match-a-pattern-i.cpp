class Solution {
public:
    int countMatchingSubarrays(vector<int>& nums, vector<int>& pattern) {
        int k = pattern.size();
        int n = nums.size();
        int ans = 0;
        for (int i = 0; i <= n - k; i++) {
            int cnt = 0;
            for (int j = i; j < i + k; j++) {
                if (pattern[j - i] == 1) {
                    if (j < n - 1 && nums[j] < nums[j + 1])
                        cnt++;
                } else if (pattern[j - i] == -1) {
                    if (j < n - 1 && nums[j] > nums[j + 1])
                        cnt++;
                } else if (pattern[j - i] == 0) {
                    if (j < n - 1 && nums[j] == nums[j + 1])
                        cnt++;
                }
            }
            if (cnt == k)
                ans++;
        }
        return ans;
    }
};