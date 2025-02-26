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
    ListNode* removeNodes(ListNode* head) {
        ListNode* curr = head;
        vector<int>nums;
        while(curr!=nullptr){
            nums.push_back(curr->val);
            curr = curr->next;
        }
        vector<int> arr;
        int maxi = INT_MIN;
        int n = nums.size();
        for(int i=n-1;i>=0;i--){
            if(nums[i]>=maxi){
                arr.push_back(nums[i]);
                maxi = nums[i];
            }
        }
        reverse(arr.begin(),arr.end());
        ListNode* temp = new ListNode();
        ListNode* dumm = temp;
        for(int i=0;i<arr.size();i++){
            dumm->next = new ListNode(arr[i]);
            dumm = dumm->next;
        }
        return temp->next;
    }
};