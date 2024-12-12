class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int scost = 0;
        int sgas = 0;
        int total = 0, res =0;
        for(int i=0;i<gas.size();i++){
            scost+=cost[i];
            sgas+=gas[i];
        }
        if(scost>sgas){
            return -1;
        }
        else{
            for(int i=0;i<gas.size();i++){
                total+=(gas[i]-cost[i]);
                if(total<0){
                    total=0;
                    res = i+1;
                }
            }
        }
        return res;
    }
};