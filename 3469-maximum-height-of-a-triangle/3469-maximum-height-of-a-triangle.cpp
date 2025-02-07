class Solution {
public:
    int maxHeightOfTriangle(int red, int blue) {
        int h = 0;
        int i = 1;
        int r = red;
        int b = blue;
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
        int h1 = 0;
        int i1 = 1;
        while (true) {
            if (i1 % 2 == 0) {
                if (r >= i1) {
                    r -= i1;
                } else {
                    break;
                }
            } else {
                if (b >= i1) {
                    b -= i1;
                } else {
                    break;
                }
            }
            h1++;
            i1++;
        }
        return max(h,h1);

    }
};