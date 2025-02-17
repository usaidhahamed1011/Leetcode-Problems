class Solution {
public:
    int maxScore(vector<int>& arr, int k) {
        int sum = 0;
        int maxsum = INT_MIN;
        for(int i=0;i<k;i++){
            sum+=arr[i];
        }
        int curr = sum;
        for(int i=k-1;i>=0;i--){
            curr-=arr[i];
            curr+=arr[arr.size()-k+i];
            sum = max(sum,curr);
        }
        return sum;
    }
};