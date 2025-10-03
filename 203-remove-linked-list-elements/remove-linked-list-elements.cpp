class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(!head)return NULL;
        while (head != NULL && head->val == val) {
            head = head->next;
        }
        ListNode* temp=head;
        ListNode* prev;
        while(temp!=NULL){
            if(temp->val==val){
                prev->next=temp->next;
            }else{
            prev=temp;
            }
            temp=temp->next;
        }
        return head;
    }
};