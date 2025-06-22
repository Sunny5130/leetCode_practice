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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int>s;
        ListNode* dummy=new ListNode();
        ListNode* temp=dummy;
        ListNode*temp1=list1;
        while(temp1!=NULL){
            s.push_back(temp1->val);
            temp1=temp1->next;
        }
        ListNode*temp2=list2;
        while(temp2!=NULL){
            s.push_back(temp2->val);
            temp2=temp2->next;
        }
        sort(s.begin(),s.end());
        int n=s.size();
        int i=0;
        while(i<n){
            ListNode* newNode=new ListNode(s[i]);
            temp->next=newNode;
            temp=temp->next;
            i++;
        }
        return dummy->next;
        
    }
};