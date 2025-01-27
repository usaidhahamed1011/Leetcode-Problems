class Solution {
public:
    char repeatedCharacter(string s) {
        set<char> ss;
        int count=0;
        char res;
        for(int i=0;i<s.size();i++){
            ss.insert(s[i]);
            count+=1;
            if(ss.size() != count){
                res = s[i];
                break;
            }
        }
        return res;
    }
};