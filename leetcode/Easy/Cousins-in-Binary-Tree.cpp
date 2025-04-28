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
public:
    TreeNode* get_parent(TreeNode* root, int value)
    {
        if(!root or root->val == value )
            return nullptr;

        int Left { }, Right{ };
        if(root->left)
            Left = root->left->val;
        if(root->right)
            Right = root->right->val;
        if(Left == value or Right == value)
            return root;
          TreeNode* leftParent = get_parent(root->left, value);
        if (leftParent) 
            return leftParent;
            
        return get_parent(root->right, value);
    }
    int get_depth(TreeNode* root, int value, int depth = 0)
    {
        if(!root)
            return 0;
            if(value == root->val)
                return depth;
            int left_depth =  get_depth(root->left, value , depth+1);
            if(left_depth)
                return left_depth ;
            return get_depth(root->right, value, depth+1);
    }
    bool isCousins(TreeNode* root, int x, int y) {
        return (get_parent(root, x ) != get_parent(root, y) and  get_depth(root, x) == get_depth(root, y));
    }
};