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
    int length(ListNode * node){
    int count=0;
    while(node){
        count++;
        node=node->next;
    }
    return count;
}
    ListNode* reverseKGroup(ListNode* head, int k) {
       if(length(head) < k)return head;
        
        ListNode* curr = head ;
       ListNode* prv = NULL ;
        ListNode* nexto = NULL ;
        int counter = 0 ;
        
       while(counter < k  ){  
            nexto = curr -> next ;
            curr->next = prv ;
            prv = curr ;
            curr = nexto ;
            counter++;
        }
        
        
        if(curr){
            head->next = reverseKGroup(curr,k);
        }
        
        return prv ;
    }
};