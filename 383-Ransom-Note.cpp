class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int n = ransomNote.size();
        int m = magazine.size();
        sort(magazine.begin(),magazine.end());
        sort(ransomNote.begin(),ransomNote.end());
        int j=0,c=0;
        for(int i=0;i<m;i++){
            if(ransomNote[j]==magazine[i]){
                c++;
                j++;
            }
        }
        return c==n;
    }
};