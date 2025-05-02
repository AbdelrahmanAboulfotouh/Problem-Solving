class Solution {
public:
    bool isCompleteTree(TreeNode* root) {
        if (!root) 
            return false;

        queue<TreeNode*> help;
        bool nullseen = false;
        help.push(root);
        while(!help.empty())
        {
            auto cur = help.front();
            help.pop();
            if(!cur)
                nullseen = true;
            else
            {
                if(nullseen)
                    return false;
                help.push(cur->left);
                help.push(cur->right);
                
            }

        }
        return true;
    }
};
