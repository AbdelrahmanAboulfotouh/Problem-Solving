/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
 TreeNode* createBST(vector<int> v , int s , int e)
    {
        if(s > e)
            return nullptr;
            int sz  = v.size();
            int mid = (s + e)/2;
        TreeNode* root = new TreeNode(v[mid]);
        root->left = createBST(v, s, mid - 1);
        root->right = createBST(v, mid+1, e);
        return root;
    }
    TreeNode* sortedListToBST(ListNode* head) 
    {
        vector<int>nums;
        for(auto cur = head; cur; cur= cur->next)
        {
            nums.push_back(cur->val);
        }
        TreeNode* root = createBST(nums,0,nums.size()-1);
        return root;
    }
};