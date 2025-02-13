/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int sum = 0;
    void find(TreeNode* root,string str){
        if(root == nullptr) return;
        if(!root->left && !root->right){
            str+=to_string(root->val);
            sum+=stoi(str);
            return;
        }
        str+=to_string(root->val);
        find(root->left,str);
        find(root->right,str);
    }
    int sumNumbers(TreeNode* root) {
        string str = "";
        find(root,str);
        return sum;
    }
};