class Solution {
public:
    int winningPlayerCount(int n, vector<vector<int>>& picks) {
        int l = picks.size();
        int result=0;
        vector<vector<int>> freq(n,vector<int>(11,0));
        for(int i=0;i<l;i++){
            int player = picks[i][0];
            int colour = picks[i][1];
            freq[player][colour]++;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<=10;j++){
                if(freq[i][j] > i){
                    result++;
                    break;
                }
            }
        }
        return result;
    }
};