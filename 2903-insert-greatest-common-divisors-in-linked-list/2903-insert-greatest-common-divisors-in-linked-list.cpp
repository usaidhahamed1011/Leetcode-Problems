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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* curr = head;
        vector<int>nums;
        while(curr!=nullptr){
            nums.push_back(curr->val);
            curr = curr->next;
        }
        int n1 = nums.size();
        if(n1==1) return head;
        vector<int>num;
        for(int i=0;i<n1-1;i++){
            num.push_back(gcd(nums[i],nums[i+1]));
        }
        int t = n1+num.size();
        int k=0,j=0;
        vector<int> n;
        for(int i=0;i<t;i++){
            if(i%2!=0){
                n.push_back(num[k]);
                k++;
            }
            if(i%2==0){
                n.push_back(nums[j]);
                j++;
            }
        }
        ListNode* temp = new ListNode();
        ListNode* dumm = temp;
        for(int i=0;i<n.size();i++){
            dumm->next = new ListNode(n[i]);
            dumm = dumm->next; 
        }
        return temp->next;
    }
};