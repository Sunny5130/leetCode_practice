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
    ListNode* partition(ListNode* head, int x) {
        vector<int>list;
        ListNode*temp=head;
        while(temp!=NULL){
            list.push_back(temp->val);
            temp=temp->next;
        }
        vector<int>ans;
        vector<int>res;
        for(int i=0;i<list.size();i++){
            if(list[i]<x)ans.push_back(list[i]);
            else res.push_back(list[i]);
        }
        int i=0;
        while(i<res.size()){
            ans.push_back(res[i++]);
        }
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