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
    ListNode* swapNodes(ListNode* head, int k) {
        vector<int>ans;
        ListNode* temp=head;
        while(temp!=NULL){
            ans.push_back(temp->val);
            temp=temp->next;
        }
        swap(ans[k-1],ans[ans.size()-k]);
        ListNode* dummy=new ListNode(0);
        temp=dummy;
        for(int i=0;i<ans.size();i++){
            ListNode* node=new ListNode(ans[i]);
            temp->next=node;
            temp=temp->next;
        }
            return dummy->next;
    }
};

