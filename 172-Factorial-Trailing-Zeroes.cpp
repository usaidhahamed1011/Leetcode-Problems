class Solution {
public:
    int trailingZeroes(int n) {
        int c=0;
        for(int i=5;i<=n;i*=5){
            c=c+(n/i);
        }
        return c;
    }
};