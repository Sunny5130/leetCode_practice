// class Solution {
// public:
//     int getDecimalValue(ListNode* head) {
//     ListNode* temp=head;
//     string ans="";
//     while(temp!=NULL){
//         ans+=(temp->val +'0');
//         temp=temp->next;
//     }
//     int s=stoi(ans,nullptr,2);
//     return s;        
//     }
// };
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int sum= 0;
        ListNode* temp=head;
        while (temp!=NULL) {
            sum=sum*2 + temp->val;
            temp=temp->next;
        }
        return sum;
    }
};
