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
        ListNode*temp=head;
        if(head==NULL ||head->next==NULL ||k==0)return head;
        int l=1;
        while(temp->next!=NULL){
            l++;
            temp=temp->next;
        }
        k=k%l;
        k=l-k;
        temp->next=head;
        while(k!=0){
            temp=temp->next;
            k--;
        }
        head=temp->next;
        temp->next=NULL;
        return head;
    }

};