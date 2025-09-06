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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
            int idx{0};
            ListNode* cur2 =nullptr;

            for(auto cur  = list1 ; cur ; cur = cur->next)
            {
                if(idx == a-1)
                {
                    cur2 = cur->next;
                    cur->next = list2;
                    ++idx;
                    break;
                }

                ++idx;
            }
            while(cur2)
            {
                if(idx == b+1)
                    break; 

                ListNode* tmp = cur2;
                cur2 = cur2->next;
                delete tmp;
                ++idx;

            }
            for(auto cur = list2;cur ; cur = cur->next)
            {
                if(!cur->next)
                {
                    cur->next = cur2;
                    break;
                }
            }

            
        return list1 ; 

        
    }
};