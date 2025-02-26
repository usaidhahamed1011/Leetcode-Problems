class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        for(int i=0;i<flowerbed.size();i++){
            bool left = false;
            bool right = false;
            if(i==0 || flowerbed[i-1] == 0){
                left = true;
            }
            if(i==flowerbed.size()-1 || flowerbed[i+1] == 0){
                right = true;
            }
            if(left && right && flowerbed[i]==0){
                flowerbed[i] = 1;
                n--;
            }
        }
        return n<=0;
    }
};