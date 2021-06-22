class Solution {
public:
    int removeDuplicates(vector<int>& A) {
       int count = 0 ;
      int size = A.size();
      
      for(int i = 0 ;i<size ;i++){
          if(i<size-1 and A[i] == A[i+1]) continue ;
          else{
              A[count] = A[i];
              count++ ;
          }
      }
    return count ; 
    }
};