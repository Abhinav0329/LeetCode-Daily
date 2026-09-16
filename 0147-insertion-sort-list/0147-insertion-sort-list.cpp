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
    ListNode* insertionSortList(ListNode* head) {
        if (!head || !head->next) return head;

        // Dummy node acts as the start of the sorted list
        ListNode* dummy = new ListNode(0);
        ListNode* curr = head;

        while (curr != nullptr) {
            // Save the next node to process in the original list
            ListNode* nextNode = curr->next;

            // Find the location in the sorted list where curr belongs
            ListNode* prev = dummy;
            while (prev->next != nullptr && prev->next->val < curr->val) {
                prev = prev->next;
            }

            // Insert curr between prev and prev->next
            curr->next = prev->next;
            prev->next = curr;

            // Advance to the next unprocessed node
            curr = nextNode;
        }

        ListNode* sortedHead = dummy->next;
        delete dummy; // Clean up dummy node
        return sortedHead;
    }
};