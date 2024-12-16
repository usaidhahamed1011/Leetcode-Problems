class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return s==t;
        // if(s.length()==t.length()){
        //     for(int i=0;i<s.length();i++){
        //         if(s[i] == t[i]){
        //             continue;
        //         }
        //         else{
        //             return false;
        //         }
        //     }
        // }
        // if(s.length()!=t.length()){
        //     return false;
        // }
        // return true;
    }
};