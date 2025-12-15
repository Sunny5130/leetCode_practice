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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int l1=1,l2=1;
        ListNode* temp=headA;
        while(temp!=NULL){
            l1++;
            temp=temp->next;
        }
        temp=headB;
        while(temp!=NULL){
            temp=temp->next;
            l2++;
        }
        ListNode* a=headA;
        ListNode* b=headB;
        int diff=abs(l1-l2);
        if(l1-l2>0){
            while(diff){
                a=a->next;
                diff--;
            }
        }else{
            while(diff){
                b=b->next;
                diff--;
            }
        }
        while(a!=NULL && b!=NULL){
            if(a==b)return a;
            a=a->next;
            b=b->next;
        }
        return 0;
    }
};