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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL || k==1)return head;
        int count=0;
        ListNode*temp=head;
        while(temp!=NULL &&count<k){
            temp=temp->next;
            count++;
        }
        if(count<k)return head;

        ListNode*prev=NULL;
        ListNode*curr=head;
        ListNode*nex;
        count=0;
        while(curr!=NULL && count < k){
            nex=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nex;
            count++;
        }
        if(nex!=NULL){
            head->next=reverseKGroup(nex,k);
        }
        return prev;
    }
};