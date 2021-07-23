class Solution {
public:
    int missingNumber(vector<int>& A) {
        int n = A.size();
        int sum = 0 ;
        for(int i : A){
            sum += i ;
        }
 
    
    return (n ) + (n-1) * (n )/2 - sum;
    }
};