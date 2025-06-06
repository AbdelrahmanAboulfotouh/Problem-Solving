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
    bool is_leaf(TreeNode* N)
    {
        return N != nullptr && N->left == nullptr && N->right == nullptr;
    }
    int sumOfLeftLeaves(TreeNode* root) 
    {
        if(!root)
            return 0;
        int sum {0};
        if(is_leaf(root->left))
            sum+= root->left->val;
        else
            sum+=  sumOfLeftLeaves(root->left) ;
        sum+= sumOfLeftLeaves(root->right) ;
        return sum ;

                
    }
};