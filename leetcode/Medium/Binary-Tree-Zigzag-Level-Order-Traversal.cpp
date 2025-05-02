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
            deque<TreeNode*> nodes;
            nodes.push_back(root);
           bool dirction = false;            
            while (!nodes.empty())
            {
                int sz = nodes.size();
                vector<int>sub_level;
                while (sz--)
                {

                    TreeNode* cur ;
                    if(dirction)
                        {cur = nodes.back();
                        nodes.pop_back();}

                    else
                    {
                        cur = nodes.front();
                        nodes.pop_front();
                    }

                    sub_level.push_back(cur->val);
                    if(!dirction)
                       { if(cur->left)
                            nodes.push_back(cur->left);
                        if(cur->right)
                            nodes.push_back(cur->right);
                       }
                    else
                    {
                    
                        if(cur->right)
                            nodes.push_front(cur->right);
                        if(cur->left)
                            nodes.push_front(cur->left);

                    }
                    

                                   
                }
                

                dirction = ! dirction;


                ans.push_back(sub_level);
            }
            return ans;
    }
};