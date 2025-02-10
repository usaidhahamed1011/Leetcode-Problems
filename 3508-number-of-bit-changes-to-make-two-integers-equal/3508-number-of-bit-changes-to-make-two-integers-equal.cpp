class Solution {
public:
    int minChanges(int n, int k) {
        if((n&k) != k) return -1;
        string n_bin = bitset<32>(n).to_string();
        string k_bin = bitset<32>(k).to_string();
        int count = 0;
        for(char c : n_bin){
            count+=c-'0';
        }
        for(char c : k_bin){
            count-=c-'0';
        }
        return count;
    }
};