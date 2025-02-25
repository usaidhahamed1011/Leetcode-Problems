class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        long long prefixsum = 0;
        long long count = 0;
        for(int a : arr){
            prefixsum+=a;
            count+= prefixsum%2;
        }
        count+=(arr.size() - count)*count;
        return count%1000000007;
    }
};