class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        vector<vector<int>> ans;
        int n = matrix.size(), m = matrix[0].size();
        vector<int> maxval(m,-1);
        for(int i=0;i<m;i++){
            int val = INT_MIN;
            for(int j=0;j<n;j++){
                val = max(val,matrix[j][i]);
            }
            maxval[i] = val;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j] == -1){
                    matrix[i][j] = maxval[j];
                }
            }
        }
        return matrix;
    }
};