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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        vector<int> ans;
        int carry=0;
        ListNode* temp1=l1;
        ListNode* temp2=l2;
        while(temp1!=nullptr||temp2!=nullptr){
            int x=(temp1!=nullptr)?temp1->val:0; 
            int y=(temp2!=nullptr)?temp2->val:0;
            int sum=x+y+carry;
            ans.push_back(sum%10);
            carry=sum/10;
            if(temp1)temp1=temp1->next;
            if(temp2)temp2=temp2->next;
        }
        if(carry){
            while(carry>0){
                ans.push_back(carry%10);
                carry=carry/10;
            }
        }
        ListNode* head=new ListNode(ans[0]);
        ListNode* temp=head;
        for(int i=1;i<ans.size();i++){
            temp->next = new ListNode(ans[i]);
            temp=temp->next;
        }
        return head;
    }
};