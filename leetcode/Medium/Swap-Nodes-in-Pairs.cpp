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
    ListNode* swapPairs(ListNode* head) {
         if(!head or !head->next)
            return head;
            ListNode* dummy = new ListNode(0);
            ListNode* Last = dummy;
            for(auto cur = head ; cur ; cur = cur->next)
            {
                auto Next = cur->next;
                 if(!dummy->next)
                    dummy->next = Next;

                if(Next)
                    {
                    cur->next = Next->next;
                    Next->next = cur ;
                    Last->next = Next;

                    }
                Last = cur ;

            }
        return dummy->next;
    }
};