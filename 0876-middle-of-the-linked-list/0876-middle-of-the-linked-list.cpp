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
        vector<ListNode*> p;
        p.push_back(head);
        while(head->next!=nullptr)
        {
            p.push_back(head->next);
            head=head->next;
        }
        return p[(p.size()+0.5)/2];
    }
};