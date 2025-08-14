class Solution {
public:
    ListNode* reverseBetween(ListNode* head,int left,int right) {
        ListNode * dummy = new ListNode(-1);
        dummy->next = head;
        ListNode* LeftPrev = dummy;
        ListNode* curr = head;
        for(int i=1;i<left;i++){
            LeftPrev=curr;
            curr=curr->next;
        }
        ListNode *prev=NULL;
        for(int i=0;i<=right-left;i++){
            ListNode * next = curr->next;
            curr->next = prev;
            prev =curr;
            curr =next;
        }
        LeftPrev->next->next = curr;
        LeftPrev->next = prev;
        return dummy->next;
    }
};