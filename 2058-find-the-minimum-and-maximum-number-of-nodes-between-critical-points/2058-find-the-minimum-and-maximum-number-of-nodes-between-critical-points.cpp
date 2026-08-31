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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        int mn=INT_MAX,idx=1,first=-1,prev=-1;
        ListNode *curr=head;
        while(curr->next->next!=nullptr){
            if((curr->next->val>curr->val&&curr->next->val>curr->next->next->val)||
               (curr->next->val<curr->val&&curr->next->val<curr->next->next->val)){
                if(first==-1)first=idx;
                if(prev!=-1)mn=min(mn,idx-prev);
                prev=idx;
            }
            curr=curr->next;
            idx++;
        }
        if(first==-1||first==prev)return {-1,-1};
        return {mn,prev-first};
    }
};