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
    bool check_symmetric(TreeNode* first, TreeNode* second)
    {
        if(!first and !second)
            return true;
        if((!first and second) or (first and !second) or (first and second and first->val != second->val))
            return false;
        
            return  check_symmetric(first->right, second->left) and check_symmetric(first->left, second->right); 
    }
   bool isSymmetric(TreeNode* root)
    {
        if(!root)
            return false;
        return  check_symmetric(root->left , root->right);

    }
};