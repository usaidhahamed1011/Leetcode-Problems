class Solution {
public:
    int minimumCost(int m, int n, vector<int>& h, vector<int>& v) {
        sort(h.begin(),h.end(),greater<int>());
        sort(v.begin(),v.end(),greater<int>());
        int i = 0,j = 0, res = 0,cnth =1,cntv = 1;
        while(i<m-1 && j<n-1){
            if(h[i]>v[j]){
                res+=h[i]*cntv;
                cnth++;
                i++;
            }
            else{
                res+=v[j]*cnth;
                cntv++;
                j++;
            }
        }
        while(i<m-1){
            res+=h[i]*cntv;
            i++;
        }
        while(j<n-1){
            res+=v[j]*cnth;
            j++;
        }
        return res;
    }
};