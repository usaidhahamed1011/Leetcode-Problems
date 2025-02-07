class Solution {
public:
    int maxHeightOfTriangle(int red, int blue) {
        return max(fun(red,blue),fun(blue,red));
    }
private:
    int fun(int red ,int blue){
        int h = 0;
        int i = 1;
        while (true) {
            if (i % 2 == 1) {
                if (red >= i) {
                    red -= i;
                } else {
                    break;
                }
            } else {
                if (blue >= i) {
                    blue -= i;
                } else {
                    break;
                }
            }
            h++;
            i++;
        }
        return h;
    }
};