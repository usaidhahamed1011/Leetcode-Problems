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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(!head->next || left == right) return head;
        ListNode* temp = new ListNode;
        temp->next = head;
        ListNode* dum=temp;
        for(int i=0;i<left -1;i++){
            dum = dum->next;
        }
        ListNode* cur = dum->next;
        for(int i=0;i<right-left;i++){
            ListNode* a = cur->next;
            cur->next = a->next;
            a->next = dum->next;
            dum->next = a;
        }
        return temp->next;
    }
};