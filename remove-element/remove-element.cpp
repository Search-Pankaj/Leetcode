class Solution {
public:
    int removeElement(vector<int>& A, int B) {
         int count =0;
    for(int i = 0 ; i< A.size() ;  i++){
        if(A[i] == B) continue ;
        else{
            A[count] = A[i];
            count++;
        }
    }
    return count ;
    }
};