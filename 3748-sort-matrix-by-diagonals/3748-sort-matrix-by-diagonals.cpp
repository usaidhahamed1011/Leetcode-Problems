class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        map<int, vector<int>> dmap;
        int n = grid.size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int k = i - j;
                dmap[k].push_back(grid[i][j]);
            }
        }
        for (auto& [key, value] : dmap) {
            if (key >= 0) {
                sort(value.rbegin(), value.rend());
            } else {
                sort(value.begin(), value.end());
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                grid[i][j] = dmap[i - j].front();
                dmap[i - j].erase(dmap[i - j].begin());
            }
        }
        return grid;
    }
};