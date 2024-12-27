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
    ListNode* middleNode(ListNode* head) {
        ListNode* curr = head;
        int count = 0;
        while(curr!=NULL){
            count+=1;
            curr=curr->next;
        }
        int mid = count/2;
        for(int i=0;i<mid;i++){
            head=head->next;
        }
        ListNode* temp = new ListNode;
        ListNode* t = temp;
        while(head!=NULL){
            t->next = new ListNode(head->val);
            head=head->next;
            t=t->next;
        }
        return temp->next;
    }
};