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
vector<int> list(TreeNode* root, int k,vector<int> &ans)
{
    if(!root)
        return { };
    list(root->left,k,ans);
        ans.push_back(root->val);
    list(root->right, k , ans);
    return ans;
}
    bool findTarget(TreeNode* root, int k) {
        vector<int> arr;
        arr = list(root,k,arr);
        int l= 0 , r = arr.size()-1;
        while(l<r)
        {
            if(arr[l] + arr[r] == k)
                return true;
            if(arr[l] + arr[r] < k)
                ++l;
            else 
                --r;
        }
        return false;
    }
};