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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(!root)
            return { };
            vector<vector<int>> ans;
            queue<TreeNode*> nodes;
            nodes.push(root);
           bool dirction = false;            
            while (!nodes.empty())
            {
                int sz = nodes.size();
                vector<int>sub_level;
                while (sz--)
                {
                    auto cur = nodes.front();
                    nodes.pop();
                    sub_level.push_back(cur->val);
                    if(cur->left)
                        nodes.push(cur->left);
                    if(cur->right)
                        nodes.push(cur->right);
                }
                if(dirction)
                        reverse(sub_level.begin(), sub_level.end());

                dirction = ! dirction;


                ans.push_back(sub_level);
            }
            return ans;
    }
};