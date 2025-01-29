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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        findlevelorder(root,0,res);
        return res;
    }
    void findlevelorder(TreeNode* node , int level,vector<vector<int>> &res){
        if(node==nullptr) return;
        if(level == res.size()){
            res.push_back(vector<int>());
        }
        res[level].push_back(node->val);
        findlevelorder(node->left,level+1,res);
        findlevelorder(node->right,level+1,res);
    }
};