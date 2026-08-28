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
    void reorderList(ListNode* head) {
        if(head == nullptr && head->next == nullptr){
            return;
        }

        ListNode *start = head;
        while(start != nullptr && start->next != nullptr){
            ListNode *temp = start;ListNode *last;
            ListNode *lastB = nullptr;
            while(temp->next != nullptr){
                lastB = temp;
                temp = temp->next;
            }

            last = temp;

            if(start->next == last){
                break;
            }

            lastB->next = NULL;

            last->next = start->next;
            start->next = last;
            start = last->next;
        }

    }
};
