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
    ListNode* partition(ListNode* A, int B) {
        //temp head node to store head
    ListNode *temp1 = new ListNode(0);
    ListNode *temp2 = new ListNode(0);

    //temp list to store odering 
    ListNode *start1 = temp1;
    ListNode *start2 = temp2;
    while (A)
    {
        if(A->val < B){
            start1->next = A;
            A = A->next;
            start1 = start1->next;
        }

        else 
        {
            start2->next = A;
            A = A->next;
            start2 = start2->next;
        }
    }

    start1->next  = temp2->next;
    start2->next = NULL;

    return temp1->next ;
    }
};