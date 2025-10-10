#include<bits/stdc++.h>
class Solution {
public:
    ListNode* doubleIt(ListNode* head) {
//         if(!head)return NULL;
//         string s="";
//         ListNode * temp=head;
//         while(temp!=NULL){
//             s+=(temp->val)+'0';
//             temp=temp->next;
//         }
//         if(s == "0") return new ListNode(0);
//         int a=stoi(s);
//         a=a*2;
//         vector<int>ans;
//         while(a>0){
//             int r=a%10;
//             ans.push_back(r);
//             a=a/10;
//         }
//         ListNode* dummy=new ListNode(0);
//         temp=dummy;
//         for(int i=ans.size()-1;i>=0;i--){
//             ListNode* node=new ListNode(ans[i]);
//             temp->next=node;
//             temp=temp->next;
//         }
//         return dummy->next;;
//     }
// };

        if(!head) return nullptr;
        vector<int> digits;
        ListNode* temp = head;
        while(temp){
            digits.push_back(temp->val);
            temp = temp->next;
        }
        int carry = 0;
        for(int i = digits.size() - 1; i >= 0; i--){
            int val = digits[i] * 2 + carry;
            digits[i] = val % 10;
            carry = val / 10;
        }
        if(carry) digits.insert(digits.begin(), carry);
        temp = head;
        for(int i = 0; i < digits.size(); i++){
            temp->val = digits[i];
            if(!temp->next && i != digits.size() - 1)
                temp->next = new ListNode(0);
            temp = temp->next;
        }
        return head;
    }
};
