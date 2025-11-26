/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
void DFS (Node* cur,int &max_depth,int max_so_far)
{
    if(!cur)
        return ;
    
    if(cur && cur->children.empty())
        {   
            max_depth = max(max_depth,max_so_far);
            max_so_far = 1;
        }
    for(auto neighbour : cur->children)
    {
        
        
        DFS(neighbour,max_depth,max_so_far+1);
        

    }
}
    int maxDepth(Node* root) {
        if(!root)
            return 0;
        int max_depth = 1;
        DFS (root,max_depth,1);
    return max_depth;
 
    }
};
