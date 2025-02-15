class Solution {
public:
    bool canAliceWin(int n) {
        int c = 0;
        int  p = 10;
        while(n>=p){
            n=n-p;
            c++;
            p--;
        }
        return c%2!=0;
    }   
};