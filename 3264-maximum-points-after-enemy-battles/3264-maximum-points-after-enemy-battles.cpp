class Solution {
public:
    long long maximumPoints(vector<int>& enemyEnergies, int currentEnergy) {
        sort(enemyEnergies.begin(),enemyEnergies.end());
        if(currentEnergy<enemyEnergies[0]) return 0;
        long long sum = currentEnergy;
        for(int i=1;i<enemyEnergies.size();i++){
            sum+=enemyEnergies[i];
        }
        long long res = sum/enemyEnergies[0];
        return res;

    }
};