class Solution {
public:
    string convert(string s, int numRows) {
        string ans ="";
        if(numRows==1)
            return s;
        int cyclen = 2*numRows -2;
        for(int i=1;i<=numRows;i++){
            int interval = (i==numRows)?cyclen:2*numRows-2*i;
            int curind = i-1;
            while(curind<s.size()){
                ans.push_back(s[curind]);
                curind+=interval;
                interval = cyclen-interval;
                if(interval == 0) interval = cyclen;
            }
        }
        return ans;
    }
};