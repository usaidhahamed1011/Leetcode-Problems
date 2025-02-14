class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
        int n = arr.size();
        stack<int> s;
        int res = 0;
        int tp, curr;
        for (int i = 0; i < n; i++) {
            while (!s.empty() && arr[s.top()] >= arr[i]) {
                tp = s.top();
                s.pop();
                int width = s.empty() ? i : i - s.top() - 1;
                res = max(res, arr[tp] * width);
            }
            s.push(i);
        }
        while (!s.empty()) {
            tp = s.top();
            s.pop();
            curr = arr[tp] * (s.empty() ? n : n - s.top() - 1);
            res = max(res, curr);
        }
        return res;
    }
};