//delete kth node from end
https://leetcode.com/problems/remove-nth-node-from-end-of-list/
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
        ListNode* prev = head;
        ListNode* curr = head;

        for (int i = 0; i < n; i++) {
            if (curr == nullptr) {
                return head;
            }
            curr = curr->next;
        }

        if (curr == nullptr) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }

        while (curr->next != nullptr) {
            curr = curr->next;
            prev = prev->next;
        }

        ListNode* toDelete = prev->next;
        prev->next = prev->next->next;
        delete toDelete;

        return head;
    }
};
