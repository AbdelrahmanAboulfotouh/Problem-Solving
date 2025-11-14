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
    
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
     unordered_set<int> hash_nums(nums.begin(),nums.end());//O(N)
     ListNode dummy(0);
     dummy.next  = head;
     ListNode* cur = &dummy;

     while(cur->next)
     {
        if(hash_nums.count(cur->next->val))
        {
            cur->next = cur->next->next;
        }
        else
            cur = cur->next;
     }
        return dummy.next;
    }
};