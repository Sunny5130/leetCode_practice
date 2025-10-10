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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        vector<int>ans,res;
        ListNode* temp=list1;
        while(temp!=NULL){
            ans.push_back(temp->val);
            temp=temp->next;
        }
        temp=list2;
        while(temp!=NULL){
            res.push_back(temp->val);
            temp=temp->next;
        }
        ans.erase(ans.begin() + a, ans.begin() + b + 1);
        ans.insert(ans.begin() + a, res.begin(), res.end());
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