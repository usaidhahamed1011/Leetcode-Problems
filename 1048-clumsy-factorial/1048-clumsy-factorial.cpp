class Solution {
public:
    int clumsy(int n) {
        stack<int> s;
        s.push(n--);
        int i=0;
        while(n>0){
            if(i%4 == 0){
                s.top() *= n;
            }
            else if(i%4 == 1){
                s.top() /= n;
            }
            else if(i%4 == 2){
                s.push(n);
            }
            else{
                s.push(-n);
            }
            i++;
            n--;
        }
        int res;
        while(!s.empty()){
            res += s.top();
            s.pop();
        }
        return res;
    }
};