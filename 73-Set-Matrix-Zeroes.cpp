class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        bool s = false;
        bool t = false;
        for(int i=0;i<m;++i){
            if(matrix[i][0] == 0){
                s=true;
                break;
            }
        }
        for(int j=0;j<n;++j){
            if(matrix[0][j] == 0){
                t=true;
                break;
            }
        }
        for(int i=1;i<m;++i){
            for(int j=1;j<n;++j){
                if(matrix[i][j] == 0){
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }
        for(int i=1;i<m;++i){
            for(int j=1;j<n;++j){
                if(matrix[i][0] == 0 || matrix[0][j] == 0){
                    matrix[i][j] = 0;
                }
            }
        }
        if(s){
            for(int i=0;i<m;i++){
                matrix[i][0] = 0;
            }
        }
        if(t){
            for(int i=0;i<n;i++){
                matrix[0][i] = 0;
            }
        }
    }
};