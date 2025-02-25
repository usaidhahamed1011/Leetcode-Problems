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
    ListNode* deleteMiddle(ListNode* head) {
        int count = 0;
        ListNode* dumm = head;
        ListNode* curr = head;
        ListNode* temp = curr;
        while(dumm!=nullptr){
            count++;
            dumm = dumm->next;
        }
        if(count == 1) return dumm;
        int mid = count/2;
        int c = 0;
        while(temp!=nullptr){
            c++;
            if(c==mid){
                temp->next = temp->next->next;
            }
            else{
                temp = temp->next;
            }
        }
        return curr;
    }
};