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
    ListNode* rotateRight(ListNode* head, int k) {
        if(k==0)return head;
        if(head==NULL)return head;
        ListNode* temp=head;
        int l=1;
        while(temp->next!=NULL){
            l++;
            temp=temp->next;
        }
        k=k%l;
        int s=l-k;
        temp->next=head;
        while(s--){
            temp=temp->next;
        }
        head=temp->next;
        temp->next=NULL;
        return head;
    }
};