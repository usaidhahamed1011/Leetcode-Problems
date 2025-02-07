class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        unordered_map<int, int> balls, colours;
        vector<int> ans;
        int count = 0;
        for (auto& i : queries) {
            int pos = i[0], color = i[1];
            if (balls.count(pos)) {
                int prevcolor = balls[pos];
                if (--colours[prevcolor] == 0)
                    count--;
            }
            balls[pos] = color;
            if (++colours[color] == 1)
                count++;
            ans.push_back(count);
        }
        return ans;
    }
};