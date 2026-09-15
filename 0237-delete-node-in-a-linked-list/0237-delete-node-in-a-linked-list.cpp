/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* prev = nullptr;
        ListNode* start = node;
        while(start->next != nullptr){
            start->val = start->next->val;
            prev = start;
            start = start->next;
        }
        prev->next = nullptr;
    }
};