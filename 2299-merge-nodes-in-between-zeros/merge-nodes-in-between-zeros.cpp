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
    ListNode* mergeNodes(ListNode* head) {
        ListNode * temp=head;
        vector<int>ans;
        while(temp!=NULL){
            ans.push_back(temp->val);
            temp=temp->next;
        }
        vector<int>res;
        int sum=0;
        for(int i=1;i<ans.size();i++){
            if(ans[i]!=0){
                sum+=ans[i];
            }else{
                res.push_back(sum);
                sum=0;
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