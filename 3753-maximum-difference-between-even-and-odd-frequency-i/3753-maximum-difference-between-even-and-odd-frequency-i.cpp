class Solution {
public:
    int maxDifference(string s) {
        vector<int> freq(26,0);
        for(char c:s){
            freq[c-'a']++;
        }
        int maxodd = INT_MIN;
        int mineven = INT_MAX;
        for(int count : freq){
            if(count>0){
                if(count%2==0){
                    mineven = min(mineven,count);
                }
                else{
                    maxodd = max(maxodd,count);
                }
            }
        }
        return maxodd-mineven;
    }
};