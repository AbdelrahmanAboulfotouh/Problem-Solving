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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int sz{ };
        for(auto cur = head;cur;cur = cur->next)
        {
            ++sz;
        }
        n = sz-n;
        if(n == 0)
            {auto tmp =head;
            head=head->next;
            delete tmp;
            
            }
            else

       { int x{1};
        for(auto cur = head;cur ;cur = cur->next)
        {
            if( x == n )
                {
                    auto tmp = cur->next;
                    if(cur->next)
                        cur->next =cur->next->next;
                    else
                        cur->next = nullptr ;
                    delete tmp ;
                }
                ++x; 
        }}
        return head;
    }
};