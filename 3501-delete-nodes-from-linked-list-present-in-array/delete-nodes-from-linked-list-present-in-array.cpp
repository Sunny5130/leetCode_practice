class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        vector<int>res;
        ListNode* temp = head;
        while(temp!=NULL){
            res.push_back(temp->val);
            temp=temp->next;
        }
        unordered_set<int> s(nums.begin(),nums.end());
        vector<int>result;
        for (int x : res) {
        if (s.find(x)==s.end()) {
            result.push_back(x);
            cout<<x<<" ";
        }
    }
    ListNode* dummy=new ListNode(0);
        temp=dummy;
    for(int i=0;i<result.size();i++){
        ListNode* node=new ListNode(result[i]);
        temp->next=node;
        temp=node;
    }
    return dummy->next;
    }
};