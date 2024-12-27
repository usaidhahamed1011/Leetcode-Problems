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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // if(!list1) return list2;
        // if(!list2) return list1;
        // if(list1->val <= list2->val){
        //     list1->next = mergeTwoLists(list1->next , list2);
        //     return list1;
        // }
        // else{
        //     list2->next = mergeTwoLists(list1 , list2->next);
        //     return list2;
        // }
        vector<int> num;
        ListNode* t1 = list1;
        ListNode* t2 = list2;
        while(t1!=NULL){
            num.push_back(t1->val);
            t1=t1->next;
        }
        while(t2!=NULL){
            num.push_back(t2->val);
            t2=t2->next;
        }
        sort(num.begin(),num.end());
        ListNode* temp = new ListNode;
        ListNode* dumm = temp;
        for(int i=0;i<num.size();i++){
            dumm->next =new ListNode(num[i]);
            dumm = dumm->next;
        }
        return temp->next;
        
    }
};