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
    ListNode* oddEvenList(ListNode* head) {
        if(head == nullptr || head->next == nullptr)return head;
        ListNode* odd = head;
        ListNode* Even = head->next;
        ListNode* Evenhead = head->next;
        while(Even!=nullptr && Even->next!=nullptr){
            odd->next = odd->next->next;
            Even->next = Even->next->next;
            odd = odd->next;
            Even = Even->next;
        }
        odd->next = Evenhead;
        return head;
    }
};