class Solution {
public:
    vector<int> findClosestElements(vector<int>& nums, int k, int x) {
    sort(nums.begin(), nums.end(), [x](int a, int b) {
        if (abs(a - x) == abs(b - x)) {
            return a < b;
        }
        return abs(a - x) < abs(b - x);
    });
    vector<int> ans(nums.begin(), nums.begin() + k);
    sort(ans.begin(), ans.end());
    return ans;
}

};