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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* finalHead = NULL;
        if(l1== NULL) return l2;
        if(l2 == NULL) return l1;
        
        if(l2->val <= l1->val){
            finalHead = l2;
            l2 = l2->next ;
        }
        else{
            finalHead = l1;
            l1 = l1->next ;
        }
        ListNode* takeNext = finalHead;
        while(l1 && l2){
            if(l2->val <= l1->val){
            takeNext->next = l2;
            l2 = l2->next ;
        }
        else{
            takeNext->next = l1;
            l1 = l1->next ;
        }
            takeNext = takeNext->next;
        }
        if(l1){
            takeNext->next = l1;
        }
        else if(l2){
            takeNext->next = l2;
        }
        
        return finalHead;
    };
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(fast && fast->next){
            slow= slow->next;
            fast=fast->next->next;
        }
        ListNode* n = slow->next;
        slow->next = NULL;
        
        ListNode* a = sortList(head);
        ListNode* b = sortList(n);
        
        head = mergeTwoLists(a,b);
        return head;
    }
};