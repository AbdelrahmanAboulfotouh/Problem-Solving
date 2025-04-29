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
    int goodNodes(TreeNode* root,int CurVal = INT_MIN) {
        if(!root)
            return 0 ;
            int goodnodes{0};
        if(root->val >= CurVal)
        {
            goodnodes+=1;
            CurVal = root->val;
        }
        goodnodes+=goodNodes(root->left, CurVal);
        goodnodes+=goodNodes(root->right, CurVal);
        return goodnodes;
    }
};