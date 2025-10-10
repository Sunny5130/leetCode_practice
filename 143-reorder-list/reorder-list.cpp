class Solution {
public:
    void reorderList(ListNode* head) {
        if(!head || !head->next) return;
        vector<ListNode*> nodes;
        ListNode* temp = head;
        while(temp) {
            nodes.push_back(temp);
            temp = temp->next;
        }
        int i =0,j=nodes.size()-1;
        while(i<j){
            nodes[i++]->next = nodes[j];
            if(i==j)break;
            nodes[j--]->next=nodes[i];
        }
        nodes[i]->next = nullptr;
    }
};
