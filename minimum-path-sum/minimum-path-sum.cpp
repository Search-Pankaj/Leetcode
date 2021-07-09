class Solution {
public:
    int minPathSum(vector<vector<int>>& A) {
      
     
   int row = A.size();
   int coll = A[0].size();
    int dp[row][coll] ;
    dp[0][0] = A[0][0] ;
    for(int i = 1 ; i<coll ; i++){
        dp[0][i] = A[0][i] + dp[0][i-1] ;
    }
    for(int i = 1 ; i<row ; i++){
        dp[i][0] = A[i][0] + dp[i-1][0] ;
    }
    for(int i = 1 ; i< row ; i++){
        for(int j = 1 ;j<coll ;j++){
            dp[i][j] = A[i][j] + min (dp[i-1][j] ,dp[i][j-1]);
         
        }
    }
    return dp[row-1][coll-1] ;  
    }
};