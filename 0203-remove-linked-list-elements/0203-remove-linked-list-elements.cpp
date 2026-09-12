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
    ListNode* removeElements(ListNode* head, int val) {
        // Remove matching nodes from the start
        while (head != nullptr && head->val == val) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
        }

        // Remove matching nodes from the rest of the list
        ListNode* temp = head;
        while (temp != nullptr && temp->next != nullptr) {
            if (temp->next->val == val) {
                ListNode* nodeToDelete = temp->next;
                temp->next = temp->next->next;
                delete nodeToDelete;
            } else {
                temp = temp->next;
            }
        }
        return head;
    }
};