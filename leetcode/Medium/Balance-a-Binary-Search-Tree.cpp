class Solution {
public:
vector<TreeNode*>Nodes;
    void inorder(TreeNode* root) {
        if (!root) return;
        inorder(root->left);
        Nodes.push_back(root);
        inorder(root->right);
    }
    TreeNode* Build_BST(int l , int r )
    {
        if(l > r)
            return nullptr;
        int mid = (l + r )/2;
        TreeNode* mid_node = Nodes[mid];
        mid_node->left = Build_BST(l , mid -1 );
        mid_node->right = Build_BST(mid+1,r);
        return mid_node;
    }
    TreeNode* balanceBST(TreeNode* root){
        if(!root)
            return nullptr;
            inorder(root);
            
               return Build_BST(0,Nodes.size()-1);
    }
};