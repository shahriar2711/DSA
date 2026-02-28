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
    bool hasCycle(ListNode *head) {
        if(!head || !head->next){
            return false;
        }

        ListNode* prev = head;
        ListNode* curr = head->next;

        while(curr && curr->next){
            if(prev == curr){
                return true;
            }
            prev = prev->next;
            curr = curr->next->next;
        }
        return false;
    }
};