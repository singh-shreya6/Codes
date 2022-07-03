/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 * https://leetcode.com/problems/merge-two-sorted-lists
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* list3 = new ListNode(0);
        ListNode* ptr = list3;
        ListNode* ptr1 = list1;
        ListNode* ptr2 = list2;
        while(ptr1 != NULL && ptr2 != NULL) {
            if(ptr1 -> val <= ptr2 -> val) {
                ptr->next = ptr1;
                ptr1 = ptr1->next;
                ptr = ptr -> next;
             } else {
                ptr->next = ptr2;
                ptr2 = ptr2->next;
                ptr = ptr -> next;
            }
        }
        if(ptr1 != NULL) {
            ptr->next = ptr1;
        }
        if(ptr2 != NULL) {
            ptr->next = ptr2;
        }
        return list3->next;
    }
};
