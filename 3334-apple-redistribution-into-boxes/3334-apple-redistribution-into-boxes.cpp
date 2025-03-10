class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int n = apple.size();
        int m = capacity.size()-1;
        int sum = 0;
        for(int i=0;i<n;i++){
            sum+=apple[i];
        }
        int count=0;
        sort(capacity.begin(),capacity.end());
        while(m>=0){
            sum-=capacity[m];
            count++;
            if(sum<=0) break;
            m--;
        }
        return count;
    }
};