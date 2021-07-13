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
    ListNode* insertionSortList(ListNode* A) {
         ListNode* ptr1 = A->next;
    while(ptr1){
        ListNode* ptr2= A;
        while(ptr2 != ptr1){
            if(ptr1->val < ptr2->val) {
                swap(ptr2->val,ptr1->val);
            }
            ptr2 = ptr2->next;
        }
        ptr1 = ptr1->next ;
    }
    return A;
        
    }
};