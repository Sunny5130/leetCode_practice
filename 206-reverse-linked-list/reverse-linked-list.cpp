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
    ListNode* reverseList(ListNode* head) {
    vector<int>vals;
    ListNode*temp=head;
    while(temp!=NULL){
        vals.push_back(temp->val);
        temp=temp->next;
    }
    int i=vals.size()-1;
    temp=head;
    while(temp!=NULL){
        temp->val=vals[i--];
        temp=temp->next;
    }
    return head;
    
    }
};