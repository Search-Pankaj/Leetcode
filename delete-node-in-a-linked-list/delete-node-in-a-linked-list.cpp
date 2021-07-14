/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
//     void swapo(ListNode* a ,ListNode * b){
//         a->next = b->next ;  
//         b->next = a ;
        
//     }
    void deleteNode(ListNode* node) {
        ListNode* tempo = node ;
        while(node->next ){
            swap(node->val , node->next->val);
            if(node->next->next){
                node = node->next ;
            }
            else{
                node->next = NULL ;
            }
            
            
        }
        //node = NULL ;
        // while(tempo->next->next){
        //     tempo = tempo->next ;
        // }
        // tempo = NULL ; 
       
    }
};