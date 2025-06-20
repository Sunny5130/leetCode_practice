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
    ListNode* oddEvenList(ListNode* head) {
        vector<int>arr;
        ListNode*temp=head;
        while(temp!=NULL &&temp->next!=NULL){
            arr.push_back(temp->val);
            temp=temp->next->next;
        }
        if(temp)arr.push_back(temp->val);
        if(head==NULL)return NULL;
        temp=head->next;
        while(temp!=NULL &&temp->next!=NULL){
            arr.push_back(temp->val);
            temp=temp->next->next;
        }
        if(temp)arr.push_back(temp->val);
        int i=0;
        temp=head;
        while(temp!=NULL ){
            temp->val=arr[i];
            i++;
            temp=temp->next;
        }
        return head;
    }
};