class Solution {
public:
    bool isValid(string s) {
        stack<char>pair;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('||s[i]=='['||s[i]=='{')
            {
                pair.push(s[i]);
            }
            else{
                if(pair.empty()){
                    return false;
                }
                if((s[i]==')' && pair.top()=='(')||(s[i]=='}' && pair.top()=='{')||(s[i]==']' && pair.top()=='[')){
                    pair.pop();
                }
                else{
                    return false;
                }
            }
        }
        return pair.empty();
    }
};