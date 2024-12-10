class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long long  temp;
        temp = x;
        int rem;
        long long reverse = 0;
        while(temp!=0){
            rem = temp %10;
            reverse = reverse *10 + rem;
            temp /=10;
        }
        return ( reverse==x);
    }
};