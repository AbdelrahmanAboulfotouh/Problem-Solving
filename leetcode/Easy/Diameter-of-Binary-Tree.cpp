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
int max_so_far = 0 ;
int Maxdepth(TreeNode* root)
{
    if(!root)
        return 0;
    int left_depth = Maxdepth(root->left);
    int right_depth = Maxdepth(root->right);

    max_so_far = max(max_so_far, left_depth  + right_depth);
    return max(left_depth, right_depth)+1;
}
        int diameterOfBinaryTree(TreeNode* root )
    
            {
                    
                Maxdepth(root);
                return max_so_far  ;
                
            }
};