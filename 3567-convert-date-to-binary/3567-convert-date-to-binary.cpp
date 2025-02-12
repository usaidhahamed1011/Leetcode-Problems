class Solution {
public:
string decToBinary(int n) {
    string bin = "";
    while (n > 0) {
        int bit = n%2;
          bin.push_back('0' + bit);
        n /= 2;
    }
    reverse(bin.begin(), bin.end());
    return bin;
}
    string convertDateToBinary(string date) {
        string s1 = date.substr(0,4);
        string s2 = date.substr(5,2);
        string s3 = date.substr(8,2);
        int a = stoi(s1);
        int b = stoi(s2);
        int c = stoi(s3);
        string a1 = decToBinary(a);
        string a2 = decToBinary(b);
        string a3 = decToBinary(c);
        return a1+"-"+a2+"-"+a3;
    }
};