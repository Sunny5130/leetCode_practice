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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>ans;
        ListNode* temp=head;
        while(temp!=NULL){
            ans.push_back(temp->val);
            temp=temp->next;
        }
        vector<int>res(ans.size(),0);
        for(int i=0;i<ans.size();i++){
            int a=ans[i];
            for(int j=i;j<ans.size();j++){
                if(ans[j]>a){
                    res[i]=ans[j];
                    break;
                }
            }
        }
        return res;
    }
};