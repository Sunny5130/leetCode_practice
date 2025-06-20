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
        ListNode*temp1=headA;
        ListNode*temp2=headB;
        int c1=0;
        int c2=0;
        while(temp1!=NULL){
            c1++;
            temp1=temp1->next;
        }
        while(temp2!=NULL){
            c2++;
            temp2=temp2->next;
        }
        int n=abs(c1-c2);
        temp1=headA;
        temp2=headB;
        if(c1>c2){
            while(n--) temp1 = temp1->next;
        }else{
            while(n--) temp2 = temp2->next;
        }
         while(temp1 != NULL && temp2 != NULL) {
            if(temp1 == temp2) return temp1;
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        return NULL;
    }
};