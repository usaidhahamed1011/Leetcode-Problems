class Solution {
public:
    int divide(int dividend, int divisor) {
        if((dividend == -2147483648)  && (divisor == -1)){
            return abs(dividend+1);
        }
        int ans = dividend/divisor;
        return ans;
    }
};