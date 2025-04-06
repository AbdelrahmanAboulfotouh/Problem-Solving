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
  ListNode* reverseList(ListNode* head, int  k){
    ListNode* pre{ };
    ListNode* cur = head;
       while(cur and k--)
       {
        ListNode* Next = cur->next;
        cur->next = pre;
        pre =cur;
        cur = Next;

       }
       return pre;
    }
  
    ListNode* reverseKGroup(ListNode* head, int k) 
    {
        int c{1};
        ListNode* dummy = new ListNode(0);
        ListNode* Last = dummy;
        ListNode*  s = head;
        for(auto cur = head ; cur ; cur=cur->next )
        {
            if(c == k)
            {
                cur = cur->next;
                c = 1;
                ListNode* Nhead = reverseList(s,k);
                if(!dummy->next)
                    dummy->next = Nhead;
                    if(s)
                        s->next = cur;
                    if(Last)
                        Last->next = Nhead;
                Last = s;
                s = cur;
            }
            ++c;
            if(!cur)
            break;
        }
        if(Last)
            Last->next = s;
        return dummy->next;
    }
};