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
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        auto cur = head;
        while(cur)
        {
            if(cur->next  and cur->val == cur->next->val )
            {ListNode* tmp = cur->next;
            cur->next = cur->next->next;
            delete tmp;
            }
            else
                cur= cur->next;
        }
        
        return head;
        
    }
};