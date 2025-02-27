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
    ListNode* reverseEvenLengthGroups(ListNode* head) {
        ListNode* curr = head;
        vector<int> res,ans;
        while(curr!=nullptr){
            res.push_back(curr->val);
            curr=curr->next;
        }
        int c=1;
        for(int i=0;i<res.size();i+=c-1){
            vector<int> temp;
            int j=i,co=c;
            while(co-- && j<res.size()){
                temp.push_back(res[j]);
                j++;
            }
            if(temp.size()%2==0){
                reverse(temp.begin(),temp.end());
            }
            ans.insert(ans.end(),temp.begin(),temp.end());
            c++;
        }
        ListNode* list = new ListNode();
        ListNode* dumm = list;
        for(int i=0;i<ans.size();i++){
            dumm->next = new ListNode(ans[i]);
            dumm = dumm->next;
        }
        return list->next;
    }
};