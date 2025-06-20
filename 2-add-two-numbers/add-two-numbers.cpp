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
    ListNode* addTwoNumbers(ListNode* num1, ListNode* num2) {
        ListNode* dummy=new ListNode(-1);
        ListNode*temp=dummy;
        int carry=0;
        while(num1!=NULL ||num2!=NULL ||carry !=0){
            int sum=0;
                if(num1!=NULL){
                    sum+=num1->val;
                    num1=num1->next;
                }        
                if(num2!=NULL){
                    sum+=num2->val;
                    num2=num2->next;
                }
                sum+=carry;
                carry=sum/10;
                ListNode* node=new ListNode(sum%10);
                temp->next=node;
                temp=temp->next;
        }
        return dummy->next;
    }
};