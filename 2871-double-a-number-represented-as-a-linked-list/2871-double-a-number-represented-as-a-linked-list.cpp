class Solution {
public:
    void solve(ListNode* &head, int &c) {
        if (!head) {
            return ;
        }
        ListNode* curr = head;
        solve(curr->next, c);
        int digit = (curr->val * 2) + c;
        curr->val = (digit % 10);
        c = digit / 10;
        return;
    }
    ListNode* doubleIt(ListNode* head) {
        int carry = 0;
        solve(head, carry);
        if (carry) {
            ListNode* temp = new ListNode(carry);
            temp->next = head;
            head = temp;
        }
        return head;
    }
};