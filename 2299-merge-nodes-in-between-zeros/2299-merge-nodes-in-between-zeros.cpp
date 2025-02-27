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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp = head->next;
        ListNode* curr = temp;
        while(curr!=nullptr){
            int sum = 0;
            while(curr->val != 0){
                sum+=curr->val;
                curr = curr->next;
            }
            temp->val = sum;
            curr = curr->next;
            temp->next = curr;
            temp = temp->next;

        }
        return head->next;
    }
};