class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        // More formally, if you are on index i on the current row, you may move to either index i or index i + 1 on the next row.
        
        vector<int> sol (triangle[triangle.size() -1] ) ;
        for(int i = triangle.size() - 2 ; i>=0 ; i--){
            for(int j = 0 ; j<=triangle[i].size()-1 ;j++){
                sol[j] = triangle[i][j] + min(sol[j] , sol[j+1]) ;
            }
        }
        return sol[0] ;
    }
};