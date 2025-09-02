/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:

    Node* copyRandomList(Node* head) {
        if(head == nullptr)
            return head;
        Node* Head = new Node(head->val);
        Node *cur_new = Head;
        unordered_map<Node*,Node*>mp;
        mp[head] = Head;
        for(Node *cur = head->next; cur ; cur = cur->next )
        {
                cur_new->next = new Node(cur->val);
                mp[cur] = cur_new->next;
                cur_new = cur_new->next;
                
        }
        for(Node *cur = head, *cur_new = Head ; cur and cur_new ; cur = cur->next , cur_new = cur_new->next)
        {
            cur_new->random =  mp[cur->random];
        }
        return Head;
    }
};