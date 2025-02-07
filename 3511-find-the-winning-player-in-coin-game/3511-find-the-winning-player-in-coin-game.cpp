class Solution {
public:
    string winningPlayer(int x, int y) {
        int moves = 0;
        while(x>0 && y>=4){
                x=x-1;
                y=y-4;
                moves++;

        }
        if(moves%2==0) return "Bob";
        return "Alice";
    }
};