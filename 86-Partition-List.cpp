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
    ListNode* partition(ListNode* head, int x) {
        ListNode* curr = head;
        ListNode* low = new ListNode();
        ListNode* high = new ListNode();
        ListNode* h = high;
        ListNode* l = low;
        while(curr!=NULL){
            if(curr->val < x){
                low->next = new ListNode(curr->val);
                low = low->next;
            }
            else if(curr->val >= x){
                high->next = new ListNode(curr->val);
                high = high->next;
            }
            curr=curr->next;
        }
        high->next = nullptr;
        low->next = h->next;
        return l->next;
    }
};