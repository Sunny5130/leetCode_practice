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
        ListNode* temp=head;
        int length=0;
        while(temp!=NULL){
            temp=temp->next;
            length++;
        }
        if(n==length)return head->next;
        temp=head;
        int diff=length-n-1;
        while(diff--){
            temp=temp->next;
        }
        temp->next=temp->next->next;
        return head;
    }
};