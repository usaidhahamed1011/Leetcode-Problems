class Solution {
public:
    int maxVowels(string s, int k) {
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
        int len = 0, maxlen = 0, left = 0;
        for (int i = 0; i < s.size(); i++) {
            if (vowels.count(s[i])) len++;
            if (i - left == k) {
                if (vowels.count(s[left])) {
                    len--;
                }
                left++;
            }
            maxlen = max(maxlen, len);
        }
        return maxlen;
    }
};