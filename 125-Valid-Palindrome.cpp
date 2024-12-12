class Solution {
public:
    bool isPalindrome(string s) {
        string s1 = "";
        for(int i=0;i<s.size();i++){
            s1+=tolower(s[i]);
        }
        string s2 = "";
        string s3 = "";
        for(int i=0;i<s1.size();i++){
            if(s1[i]>='a' && s1[i]<='z' || s1[i]>='0' && s1[i]<='9'){
                s2+=s1[i];
            }
        }
        for(int i=s2.size()-1;i>=0;i--){
            s3+=s2[i];
        }
        // for(int i=0;i<s2.size()/2;i++){
        //     if(s2[i]!=s2[s2.size()-i]){
        //         return false;
        //     }
        // }
        return s2==s3;
    }
};