1class Solution {
2public:
3
4    int height(TreeNode* node)
5    {
6        if(node == nullptr)
7            return 0;
8
9        int leftHeight = height(node->left);
10        if(leftHeight == -10 )
11            return -10;
12
13        int rightHeight = height(node->right);
14        if(rightHeight ==-10)
15            return -10;
16
17        if(abs(leftHeight - rightHeight) > 1)
18            return -10;
19
20        
21
22        return 1 + max(leftHeight, rightHeight);
23    }
24
25    bool isBalanced(TreeNode* root)
26    {
27        return height(root) != -10;
28    }
29};