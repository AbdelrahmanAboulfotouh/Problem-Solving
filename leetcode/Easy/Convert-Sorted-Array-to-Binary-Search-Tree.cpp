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
TreeNode* create_balanced_BST(vector<int>vals,int start,int end)
{
    if(start > end)
        return nullptr;
    int mid = (start + end)/2;
    TreeNode* newroot = new TreeNode(vals[mid]);
    newroot->left =create_balanced_BST(vals,start,mid-1);
    newroot->right = create_balanced_BST(vals,mid+1,end);
    return newroot;
}
    TreeNode* sortedArrayToBST(vector<int>& nums)
     { 
        TreeNode* root = create_balanced_BST(nums,0,nums.size()-1);
         return root;
     }
};