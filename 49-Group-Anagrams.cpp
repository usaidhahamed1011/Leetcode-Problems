class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> ans;
        for(auto& s:strs){
            string k = s;
            sort(k.begin(),k.end());
            ans[k].push_back(s);
        }
        vector<vector<string>> ans1;
        for (auto& mp:ans){
            ans1.push_back(mp.second);
        }
        return ans1;
    }
};