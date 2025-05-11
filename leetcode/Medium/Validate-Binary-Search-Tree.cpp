/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int get_max(TreeNode* root) {
        if (!root)
            return INT_MIN;
        int left_max = get_max(root->left);
        int right_max = get_max(root->right);
        int mx = max(left_max, right_max);
        return max(root->val, mx);
    }
    int get_min(TreeNode* root) {
        if (!root)
            return INT_MAX;
        int left_min = get_min(root->left);
        int right_min = get_min(root->right);
        int mn = min(left_min, right_min);
        return min(root->val, mn);
    }
 bool isValidBST(TreeNode* root) {

    if (!root)
        return true;
   
    if((root->right and get_min(root->right) <= root->val )or (root->left and get_max(root->left) >= root->val))
        return false;
    return isValidBST(root->left) and isValidBST(root->right);
}
}
;