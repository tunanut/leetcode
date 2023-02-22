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
        int c=2;
        ListNode p(0,head);
        ListNode* p1=head;
        while(p1->next)
        {
            ++c;
            p1=p1->next;
        }
        p1=&p;
        c-=n;
        while(--c>0)
            p1=p1->next;
        if(p1->next)
            p1->next=p1->next->next;
        return p.next;
    }
};