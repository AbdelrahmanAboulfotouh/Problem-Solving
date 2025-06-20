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
    TreeNode* pre = nullptr;
    TreeNode* first = nullptr, *second = nullptr;
    void select (TreeNode* Pre, TreeNode* Cur)
    {
        if(!first)
        {
            first = Pre;
            second = Cur ;
        }
        else
            second = Cur;
    }
    void inorder_traverse(TreeNode* root)
    {
        if(!root)
            return;
        inorder_traverse(root->left);
        if(pre and pre->val > root->val)
        {
            select(pre, root);
        }
        pre = root;
        inorder_traverse(root->right);
    }
    void recoverTree(TreeNode* root) 
    {
        inorder_traverse(root);
        swap(first->val , second->val);
    }
};