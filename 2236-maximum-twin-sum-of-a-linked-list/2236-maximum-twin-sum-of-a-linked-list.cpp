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
    int pairSum(ListNode* head) {
        ListNode* curr = head;
        vector<int> nums;
        while(curr!=nullptr){
            nums.push_back(curr->val);
            curr = curr->next;
        }
        int n = nums.size();
        int sum=0;
        for(int i=0;i<n/2;i++){
            sum = max(sum,nums[i]+nums[n-i-1]);
        }
        return sum;
    }
};