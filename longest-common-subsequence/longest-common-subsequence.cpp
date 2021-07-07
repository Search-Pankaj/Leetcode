class Solution {
public:
    int longestCommonSubsequence(string A, string B) {
          int m = A.length();
    int n = B.length();
    
    if (m <1 || n <1)
        return 0;
        
    vector<vector<int>> lcs(m+1, vector<int> (n+1,0));
    
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            if (A[i-1] == B[j-1])
                lcs[i][j] = lcs[i-1][j-1]+1;
            else
                lcs[i][j] = max(lcs[i][j-1], lcs[i-1][j]);
        }
    }
    
    return lcs[m][n];
    }
};