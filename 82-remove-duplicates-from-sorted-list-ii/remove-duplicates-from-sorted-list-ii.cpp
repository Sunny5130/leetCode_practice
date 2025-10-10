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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head)return NULL;
        vector<int>ans;
        ListNode* temp=head;
        while(temp!=NULL){
            ans.push_back(temp->val);
            temp=temp->next;
        }
        vector<int>res;
        res.push_back(ans[0]);
        for(int i=1;i<ans.size();i++){
            if(ans[i-1]==ans[i]){
                if(!res.empty() && res.back()==ans[i]){
                    res.pop_back();
                }
                continue;
            }else{
                res.push_back(ans[i]);
            }
        }
        ListNode* dummy=new ListNode(0);
        temp=dummy;
        for(int i=0;i<res.size();i++){
            ListNode* node=new ListNode(res[i]);
            temp->next=node;
            temp=temp->next;
        }
        return dummy->next;
    }
};

