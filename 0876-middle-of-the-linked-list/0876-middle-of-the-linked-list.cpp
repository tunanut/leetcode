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
    ListNode* middleNode(ListNode* head) {
        ListNode* p1=head;
        ListNode* p2=head;
        
        if(!head)
            return head;
        
        while(p1->next&&p2->next&&p2->next->next)
        {
            p1=p1->next;
            p2=p2->next->next;
        }
        return p2->next?p1->next:p1;
    }
};