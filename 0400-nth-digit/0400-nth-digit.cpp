class Solution {
public:
    int findNthDigit(int n) {
        long long digitsize = 1;
        int start = 1;
        int count = 9;
        while (digitsize * count < n) {
            n -= (digitsize * count);
            ++digitsize;
            start *= 10;
            count *= 10;
        }
        start += (n - 1) / digitsize;
        int index = (n - 1) % digitsize;
        string s = to_string(start);
        return s[index] - '0';
    }
};
