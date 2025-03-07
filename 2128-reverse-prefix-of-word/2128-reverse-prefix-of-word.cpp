class Solution {
public:
    string reversePrefix(string word, char ch) {
        int n = word.size();
        int idx=0;
        for(int i=0;i<n;i++){
            if(word[i]==ch){
                idx=i;
                break;
            }
        }
        string s;
        for(int j = idx;j>=0;j--){
            s+=word[j];
        }
        for(int j=idx+1;j<n;j++){
            s+=word[j];
        }
        return s;
    }
};