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
    bool isPalindrome(ListNode* head) {
        int sz{};
        for(auto i  = head ; i;i=i->next)
            ++sz;
        stack<int>st;
        int n = sz/2;
        for(auto i = head;n;i=i->next)
        {
            st.push(i->val);
            --n;
        }
        if(sz % 2 == 0)
            n = sz/2;
        else
            n  = sz/2 +1;
        ListNode* idx = head;
        for(int i{0};i<n;i++)
            idx = idx->next;
        for(;idx;idx=idx->next)
        {
            if(idx->val == st.top())
                st.pop();
            else
                return false;
                
        }  
        return true;    

    }
};