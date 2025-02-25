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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        int diff = abs(a-b);
        ListNode* curr1 = list1;
        ListNode* curr2 = list2;
        vector<int> ans1;
        vector<int> ans2;
        while(curr1!=nullptr){
            ans1.push_back(curr1->val);
            curr1 = curr1->next;
        }
        while(curr2!=nullptr){
            ans2.push_back(curr2->val);
            curr2 = curr2->next;
        }
        int n = ans1.size();
        int k=0;
        vector<int> ans;
        for(int i=0;i<a;i++){
            ans.push_back(ans1[i]);
        }
        for(int i=0;i<ans2.size();i++){
            ans.push_back(ans2[i]);
        }
        for(int i= b+1;i<ans1.size();i++){
            ans.push_back(ans1[i]);
        }
        ListNode* temp = new ListNode();
        ListNode* dum = temp;
        for(int i=0;i<ans.size();i++){
            dum->next = new ListNode(ans[i]);
            dum = dum->next;
        }
        return temp->next;;
    }
};