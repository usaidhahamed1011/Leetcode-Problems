#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countKeyChanges(string s) {
        int n = s.size();
        int count = 0;
        string s1;
        for(int i=0;i<n;i++){
            s1+=tolower(s[i]);
        }
        for(int i=0;i<n-1;i++){
            if(s1[i]!=s1[i+1]){
                count+=1;
            }
        }
        return count;
    }
};