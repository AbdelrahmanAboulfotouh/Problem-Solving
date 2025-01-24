/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        int count {};
        bool f =false;
        for(ListNode* low = head,  *fast = head;fast and fast->next; low = low->next, fast = (fast->next)->next )
        {
            if(fast == low and f)
                return true;
                f=true;
        }
        return false;

    }
};