/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* t1 = l1;
        ListNode* t2 = l2;
        vector<int> a1;
        vector<int> a2;
        while(t1!=nullptr){
            a1.push_back(t1->val);
            t1=t1->next;
        }
        while(t2!=nullptr){
            a2.push_back(t2->val);
            t2=t2->next;
        }
        int n = a1.size()-1 , m = a2.size()-1;
        int c=0;
        vector<int> res;
        while(n>=0 || m>=0){
            int sum = c;
            if(n>=0){
                sum+=a1[n];
                n--;
            }
            if(m>=0){
                sum+=a2[m];
                m--;
            }
            res.push_back(sum%10);
            c=sum/10;
        }
        if(c!=0) res.push_back(c);
        reverse(res.begin(),res.end());
        ListNode* temp = new ListNode();
        ListNode* dum = temp;
        for(int i=0;i<res.size();i++){
            dum->next = new ListNode(res[i]);
            dum = dum->next;
        }
        return temp->next;
    }
};