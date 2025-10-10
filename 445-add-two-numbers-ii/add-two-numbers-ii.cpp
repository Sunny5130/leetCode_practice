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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//         string s1="";
//         string s2="";
//         ListNode* temp=l1;
//         while(temp!=NULL){
//             s1+=temp->val+'0';
//             temp=temp->next;
//         }
//         temp=l2;
//         while(temp!=NULL){
//             s2+=temp->val+'0';
//             temp=temp->next;
//         }
//         long long a = stoll(s1);
//         long long b = stoll(s2);
//         long long c = a + b;

//         if(c==0) return new ListNode(0);
//         vector<int>ans;
//         while(c!=0){
//             int r=c%10;
//             ans.push_back(r);
//             c=c/10;
//         }
//         ListNode* dummy=new ListNode(0);
//         temp=dummy;
//         for(int i=ans.size()-1;i>=0;i--){
//             ListNode* node=new ListNode(ans[i]);
//             temp->next=node;
//             temp=temp->next;
//         }
//         return dummy->next;
//     }
// };
    stack<int>s1,s2;
    while(l1){
        s1.push(l1->val);
         l1=l1->next;
    }
    while(l2){ 
        s2.push(l2->val);
        l2=l2->next;
    }
    ListNode* head = nullptr;
    int carry = 0;
    while(!s1.empty() || !s2.empty() || carry) {
        int sum = carry;
        if(!s1.empty()){
            sum +=s1.top();
            s1.pop(); 
        }
        if(!s2.empty()){
            sum +=s2.top(); 
            s2.pop();
        }
        ListNode* node = new ListNode(sum % 10);
        node->next=head;
        head = node;
        carry = sum/10;
    }
    return head;
    } 
};