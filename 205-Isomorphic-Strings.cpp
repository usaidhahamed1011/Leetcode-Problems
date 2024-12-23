class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int> ans_s(128);
        vector<int> ans_t(128);
        for(int i=0;i<s.length();i++){
            if(ans_s[s[i]]!=ans_t[t[i]]) return false;
            ans_s[s[i]] = i+1;
            ans_t[t[i]] = i+1;
        }
        return true;
    }
};