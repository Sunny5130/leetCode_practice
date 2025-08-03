class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(!head||!head->next){return head;}
        ListNode* curr=head,*prev= nullptr,*h=head->next;
        while(curr&&curr->next){
            ListNode* a=curr,*b=curr->next;
            a->next=b->next;
            b->next=a;
            if(prev)prev->next=b;
            prev=a;
            curr=a->next;
        }
        return h;
    }
};