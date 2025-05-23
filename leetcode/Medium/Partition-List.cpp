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
    ListNode* partition(ListNode* head, int x) {
       
        ListNode* low_head{ };
        ListNode* low_cur{ };
        ListNode* high_head{ };
        ListNode* high_cur{ };

        for(auto cur = head; cur ;cur = cur->next)
        {
            ListNode* item = new ListNode(cur->val);
            if(item->val <  x)
            {
                if(!low_head)
                {
                    low_head = low_cur = item; 
                }
                else
                {
                    low_cur->next = item;
                    low_cur = low_cur->next;
                }
            }           
            else
            {
                 if(!high_head)
                 {
                    high_head = high_cur = item;
                 }
                 else
                 {
                    high_cur->next = item;
                    high_cur = high_cur->next;
                 }
              
            }
        }
        if(low_cur)
            {
            low_cur->next = high_head;
            return low_head;
            }
        return high_head;
    }
};