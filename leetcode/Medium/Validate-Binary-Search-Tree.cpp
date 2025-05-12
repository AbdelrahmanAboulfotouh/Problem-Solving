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
vector<int>inorder;
void traverse(TreeNode* root)
{
    if(!root)
        return ;
    traverse(root->left);
    inorder.push_back(root->val);  
    traverse(root->right);
}
  
 bool isValidBST(TreeNode* root, int upper = INT_MIN, int lower = INT_MAX)
  {

    if (!root)
        return true;
      traverse(root);
      for(int i{0};i<inorder.size()-1;++i)
      {
        if(inorder[i] >= inorder[i+1])
            return false;
      }
      return true;
}
};