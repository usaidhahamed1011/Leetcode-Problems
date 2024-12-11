class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        int rot = k%n;
        int arr[n];
        int va = n-rot;
        int j=0;
        for(int i=va;i<n;i++){
            arr[j] = nums[i];
            j++;
        }
        for(int i=0;i<va;i++){
            arr[j] = nums[i];
            j++;
        }
        for(int i=0;i<n;i++){
            nums[i] = arr[i];
        }
    }
};