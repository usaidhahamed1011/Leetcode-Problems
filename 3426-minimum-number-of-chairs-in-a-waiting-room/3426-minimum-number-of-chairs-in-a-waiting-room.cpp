class Solution {
public:
    int minimumChairs(string s) {
        int count = 0;
        int mincount = 0;
        for(int i=0;i<s.size();i++){
            if(s[i] == 'E'){
                count++;
            }
            else{
                count--;
            }
            mincount=max(mincount,count);
            
        }
        return mincount;
    }
};