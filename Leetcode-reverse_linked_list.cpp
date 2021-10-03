/**
  Problem : https://leetcode.com/problems/reverse-linked-list/

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
    
    ListNode* temp = NULL;
    
    ListNode* reverseList(ListNode* head) {
        if (head == NULL || head -> next == NULL) {
            temp = head;
            return head;
        }
        ListNode* root = reverseList(head->next);
        if (temp != NULL) {
            temp -> next = head;
            head -> next = NULL;
        }
        temp = head;
        return root;
    }
};
