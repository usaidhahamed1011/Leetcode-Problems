class Solution {
public:
    int trap(vector<int>& height) {
        if(height.empty()){
            return 0;
        }
        int ans = 0;
        int l = 0;
        int r = height.size()-1;
        int leftmax = height[l],rightmax = height[r];
        while(l<r){
            if(leftmax<rightmax){
                ans+=leftmax-height[l];
                leftmax = max(leftmax,height[++l]);
            }
            else{
                ans+=rightmax-height[r];
                rightmax = max(rightmax,height[--r]);
            }
        }
        return ans;
    }
};