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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* start = head;
        if(head == nullptr) return head;
        int cnt = 1;
        while(head->next!=NULL){
            cnt+=1;
            head=head->next;
        }
        int r = k%cnt;
        head->next = start;
        for(int i=1;i<cnt-r;i++){
            start = start->next;
        }
        head = start->next;
        start->next = nullptr;
        return head;
    }
};