class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        
        for(int i=0;i<=n;i++){
            int c=0;
            // if(i==0) ans.push_back(0);
            // if(i==1) ans.push_back(1);
            int n=i;
            while(n){
                n=n&(n-1);
                c+=1;
            }
            ans.push_back(c);
        }
        return ans;
    }
};