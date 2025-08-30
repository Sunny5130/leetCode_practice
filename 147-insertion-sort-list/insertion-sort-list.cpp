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
    ListNode* insertionSortList(ListNode* head) {
        vector<int>ans;
        ListNode* temp=head;
        while(temp!=NULL){
            ans.push_back(temp->val);
            temp=temp->next;
        }
        sort(ans.begin(),ans.end());
        ListNode* dummy= new ListNode(0);
        ListNode* temp2=dummy;
        for(int i=0;i<ans.size();i++){
            ListNode* node=new ListNode(ans[i]);
            temp2->next=node;
            temp2=temp2->next;
        }
        return dummy->next;
    }
};