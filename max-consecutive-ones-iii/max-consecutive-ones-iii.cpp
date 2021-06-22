class Solution {
public:
    int longestOnes(vector<int>& A, int B) {
        int count = 0 ;
    int i = 0 ;
    int l = 0;
    int ans  = INT_MIN;
    for(int i = 0 ;i <A.size() ;i++){
        if(A[i] == 0) {
            count++ ;
        }
        if(count>B){
            if(A[l] == 0) count--;
            l++ ;
        }
        ans = max(ans,i-l+1);
    }
    
    return ans ;
    }
};