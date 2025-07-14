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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr) return head;
        ListNode* temp=head;
        ListNode* temp1=head;
        int length=1;
        while(temp->next!=nullptr){
            length++;
            temp=temp->next;
        }
        int n=k%length;
        if(n==0){
            return head;
        }
        int m=length-n-1;
        while(m--){
            temp1=temp1->next;
        }
        ListNode* ans=temp1->next;
        temp1->next=nullptr;
        temp->next=head;
        return ans;
    }
};