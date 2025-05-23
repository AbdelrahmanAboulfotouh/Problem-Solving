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
          //  ListNode* item = new ListNode(cur->val);
            if(cur->val <  x)
            {
                if(!low_head)
                {
                    low_head = low_cur = cur; 
                }
                else
                {
                    low_cur->next = cur;
                    low_cur = low_cur->next;
                }
            }           
            else
            {
                 if(!high_head)
                 {
                    high_head = high_cur = cur;
                 }
                 else
                 {
                    high_cur->next = cur;
                    high_cur = high_cur->next;
                 }
              
            }
        }
        if(high_cur)
            high_cur->next = nullptr;
        if(low_cur)
            {
            low_cur->next = high_head;
            return low_head;
            }
        return high_head;
    }
};