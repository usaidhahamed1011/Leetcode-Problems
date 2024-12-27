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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* tem = new ListNode;
        tem->next = head;
        ListNode* dum = tem;
        while(dum->next){
            if(dum->next->val == val){
                dum->next = dum->next->next;
            }
            else{
                dum = dum->next;
            }
        }
        return tem->next;
    }
};