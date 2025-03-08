class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n = blocks.size(), black = 0, ans = INT_MAX;
        for(int i=0;i<n;i++){
            if(i-k>=0 && blocks[i-k] == 'B') black--;
            if(blocks[i]=='B') black++;
            ans = min(ans,k-black);
        }
        return ans;
    }
};