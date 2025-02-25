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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* curr = head;
        vector<int>nums;
        while(curr!=nullptr){
            nums.push_back(curr->val);
            curr = curr->next;
        }
        int n = nums.size();
        swap(nums[k-1],nums[n-k]);
        ListNode* temp = new ListNode();
        ListNode* dumm = temp;
        for(int i=0;i<nums.size();i++){
            dumm->next = new ListNode(nums[i]);
            dumm = dumm->next; 
        }
        return temp->next;
    }
};