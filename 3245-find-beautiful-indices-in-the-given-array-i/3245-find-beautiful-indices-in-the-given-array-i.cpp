class Solution {
    vector<int> find_occurrences(const string& s, const string& b) {
        vector<int> indices;
        size_t index = s.find(b);
        while (index != string::npos) {
            indices.push_back(static_cast<int>(index));
            index = s.find(b, index + 1);
        }
        return indices;
    }
public:
    vector<int> beautifulIndices(string s, string a, string b, int k) {

        vector<int> first = find_occurrences(s, a);
        vector<int> second = find_occurrences(s, b);

        vector<int> ans;
        for(int i=0; i < first.size(); i++){
            for(int j=0; j < second.size(); j++){
                if(second[j] != -1){
                    if(abs(first[i] - second[j]) <= k){
                        ans.push_back(first[i]);
                        break;
                    }
                }
            }
        }
        return ans;
    }
};