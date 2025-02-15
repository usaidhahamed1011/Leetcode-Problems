class Solution {
public:
    int num;
    string s;
    bool find(int i=0,int rem=0,int sum=0){
        if(i==s.size()) return sum+rem==num;
        rem = rem*10+s[i]-'0';
        return find(i+1,0,sum+rem)|find(i+1,rem,sum);
    }
    int punishmentNumber(int n) {
        int ans = 0;
        for(int i=1;i<=n;i++){
            num=i,s=to_string(i*i);
            ans+=find()*i*i;
        }
        return ans;
    }
};