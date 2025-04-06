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
  bool reverseList(ListNode* head, int  k,ListNode** C, ListNode** Nhead)
  {
    ListNode* pre{ };
    ListNode* cur = head;
       while(cur and k--)
       {
        ListNode* Next = cur->next;
        cur->next = pre;
        pre =cur;
        cur = Next;

       }
        *C = cur;

       if(k<=0)
       {
        *Nhead = pre;
        *C = cur;
        return true;
        }    
    return false;
    }
  
    ListNode* reverseKGroup(ListNode* head, int k) 
    {
        int total_re{};
        for(auto cur = head;cur;cur=cur->next)
        {
            ++total_re;
        }
        total_re/=k;
        ListNode* dummy = new ListNode(0);
        ListNode* Last = dummy;
        ListNode*  s = head;
        ListNode* Nhead = head;
        ListNode* cur = head;
        while(total_re-- and reverseList(s,k,&cur,&Nhead))
        {
             if(!dummy->next)
                    dummy->next = Nhead;
                    if(s)
                        s->next = cur;
                    if(Last)
                        Last->next = Nhead;
                Last = s;
                s = cur;
        }
        if(Last)
            Last->next = s;
        return dummy->next;
    }
};