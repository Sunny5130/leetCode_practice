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
 #include<bits/stdc++.h>
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        string s="";
        ListNode* temp=head;
        while(temp!=NULL){
            s += (temp->val+'0');
            temp=temp->next;
        }
    int d=stoi(s,nullptr,2); 
        return d;
    }
};

