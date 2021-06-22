class Solution {
public:
    void merge(vector<int>& A, int m, vector<int>& B, int n) {
        int last = A.size() - 1 ;
    int j = B.size() - 1 ;
    int i = A.size() - B.size() - 1;
    
    while( j >= 0){     
         if (i>= 0 and B[j] < A[i]){
        A[last--] = A[i--];
        
        }
        
        else{
        A[last--] = B[j--];
        }
    }
    
    }
};