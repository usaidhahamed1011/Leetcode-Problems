class Solution {
public:
    long long maxEnergyBoost(vector<int>& energyDrinkA, vector<int>& energyDrinkB) {
        long long dpA = 0;
        long long dpB = 0;
        for(int i=0;i<energyDrinkA.size();i++){
            long long A = max(dpB,dpA+energyDrinkA[i]);
            long long B = max(dpA,dpB+energyDrinkB[i]);
            dpA = A;
            dpB = B;
        }
        return max(dpA,dpB);
    }
};