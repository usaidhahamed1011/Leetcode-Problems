class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int length = m;
        for(int i=0;i<n;i++){
            nums1[length] = nums2[i];
            length+=1;
        }
        sort(nums1.begin(),nums1.end());
    }
};