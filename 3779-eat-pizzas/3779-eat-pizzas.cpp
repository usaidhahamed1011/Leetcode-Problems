class Solution {
public:
    long long maxWeight(vector<int>& pizzas) {
        sort(pizzas.begin(), pizzas.end());
        long long totalWeight = 0;
        int n = pizzas.size(),days = n/4,index = n-1;
        for(int i = 1;i<=days;i+=2){
            totalWeight += pizzas[index--];
        }
        index--;
        for(int i = 2;i<=days;i+=2){
            totalWeight += pizzas[index];
            index-=2;
        }
        return totalWeight;
    }
};
