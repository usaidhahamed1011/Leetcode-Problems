class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int mx=0;
        int st=0;
        map<char,int> freq;
        for(int i=0;i<n;i++){
            if(freq[s[i]]==0){
                freq[s[i]]++;
            }
            else{
                while(st<i&&s[i]!=s[st]){
                    freq[s[st]]--;
                    st++;
                }
                st++;
            }
            mx = max(mx,i-st+1);
        }
        return mx;
    }
};