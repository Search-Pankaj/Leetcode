class Solution {
public:
    string longestCommonPrefix(vector<string>& A) {
     
string ans ;
int si = A.size();
sort(A.begin(),A.end());
int n = min (A[0].size(),A[si-1].size());
int i = 0 ;
while(i<n){
    if(A[0][i] == A[si - 1][i]){
        
        ans += A[0][i];
        i++ ; 
    }
    else{
        break;
    }
}
return ans ;   
    }
};