class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(auto i : arr){
            mp[i]++;
        }
        set<int> s;
        for(auto j : mp){
            s.insert(j.second);
        }
        return mp.size()==s.size();
    }
};