class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j=0;int i=0;
        while(i<s.length() && j<t.length()){
            if(s[i]==t[j]){
                i+=1;
                j+=1;
            }
            else{
                j+=1;
            }
        }
        return i==s.length();
    }
};