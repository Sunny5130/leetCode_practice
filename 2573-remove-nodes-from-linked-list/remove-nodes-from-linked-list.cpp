class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
        vector<int>ans;
        ListNode* temp=head;
        while(temp!=NULL){
            ans.push_back(temp->val);
            temp=temp->next;
        }
        vector<int>res;
        res.push_back(ans[ans.size()-1]);
        int maxi=ans[ans.size()-1];
        for(int i=ans.size()-2;i>=0;i--){
            if(ans[i]>=maxi){res.push_back(ans[i]);
            maxi=ans[i];
            }
        }
        
        ListNode* dummy=new ListNode(0);
        temp=dummy;
        for(int i=res.size()-1;i>=0;i--){
            ListNode* node=new ListNode(res[i]);
            temp->next=node;
            temp=node;
        }
        return dummy->next;
    }
};