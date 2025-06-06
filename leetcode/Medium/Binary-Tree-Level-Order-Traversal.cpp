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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(!root)
            return {};
        queue< TreeNode* >q;
        q.push(root);
        vector<vector<int>>ans;
        while(!q.empty())
        {
          int sz = q.size();
          vector<int>sub;

          while(sz-- )
          {
            auto cur = q.front();
            q.pop();
            sub.push_back(cur->val);
            if(cur->left)
                q.push(cur->left);
            if(cur->right)
                q.push(cur->right);
          }
          ans.push_back(sub);

        }
        return ans;
    }
};