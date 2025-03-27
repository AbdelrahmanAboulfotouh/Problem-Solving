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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        ListNode l3(0);
        ListNode* cur3 = &l3;
        ListNode* cur2 = l2;
        ListNode* cur1 = l1;
        int Remainder{ };
        for(;cur1 and cur2 ; cur1=cur1->next , cur2 = cur2->next)
        {
            int sum = cur1->val + cur2->val + Remainder ; 
            cur3->next = new ListNode(sum % 10) ;
            Remainder = (sum/10);
            cur3 = cur3->next;


        }
        if(cur1)
        {
            for(;cur1; cur1=cur1->next)
            {
                int sum = cur1->val + Remainder ; 
            cur3->next = new ListNode(sum % 10) ;
                Remainder=(sum/10);
               
                cur3 = cur3->next;


            }
        }
        else if(cur2)
        {
                for(;cur2; cur2 = cur2->next)
            {
                int sum =  cur2->val + Remainder ; 
                cur3->next = new ListNode(sum % 10) ;
                Remainder=(sum/10);
            
                        cur3 = cur3->next;


            }
        }
        if(Remainder)
        {
             
            cur3->next = new ListNode(Remainder) ;
        }
                

      
    

        return l3.next;
    }
};