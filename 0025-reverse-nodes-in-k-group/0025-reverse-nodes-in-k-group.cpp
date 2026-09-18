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
    ListNode* reverseKGroup(ListNode* head, int k) {
        // 1. Check if there are at least k nodes left
        ListNode* curr = head;
        int count = 0;
        while (curr != nullptr && count < k) {
            curr = curr->next;
            count++;
        }

        // 2. If fewer than k nodes, keep original order
        if (count < k) {
            return head;
        }

        // 3. Reverse k nodes
        curr = head;
        ListNode* prev = nullptr;
        ListNode* next = nullptr;
        for (int i = 0; i < k; i++) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        // 4. Recursively process the rest and link
        if (next != nullptr) {
            head->next = reverseKGroup(next, k);
        }

        return prev;
    }
};