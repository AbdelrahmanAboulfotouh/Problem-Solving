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
    ListNode* Delete_and_move(ListNode* E, ListNode* current, ListNode** head) {
        ListNode* item = current->next;
        if (E) {
            E->next = item;
        } else if (current == *head) {
            *head = item;
        }
        delete current;
        return item;
    }
    
    ListNode* deleteDuplicates(ListNode* head) {
        int pre = -200;
        ListNode* E = nullptr;
        ListNode* cur = head;
        while (cur) {
            // deletion decision
            if (cur->val == pre || (cur->next && cur->val == cur->next->val)) {
                pre = cur->val;
                cur = Delete_and_move(E, cur, &head);
            } else {
                E = cur;
                pre = cur->val;
                cur = cur->next;
            }
        }
        return head;
    }
};