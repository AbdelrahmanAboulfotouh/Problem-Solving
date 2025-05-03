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
string canonicalize(TreeNode* root)
{
        if(!root)
            return "";
    string ans;
    ans+=("(" + to_string(root->val));
    vector<string> helper;
    if(root->left)
        helper.push_back(canonicalize(root->left));
    else
        ans+="()";
    if(root->right)
        helper.push_back(canonicalize(root->right));
    else
        ans+="()";
    sort(helper.begin(),helper.end());
    for(string &C : helper)
        ans+=C;
    
    return ans;
}
    bool flipEquiv(TreeNode* root1, TreeNode* root2) {
        string first = canonicalize(root1);
        string last = canonicalize(root2);
        return first == last ;
        
    }
};