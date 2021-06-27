// fromula to print specific 
class Solution {
public:
    vector<int> getRow(int rowIndex) {       
    vector<vector<int>> pascal(rowIndex+1) ;
    for(int i =0; i< rowIndex +1;i++ ){
        pascal[i].resize(i+1);
        pascal[i][0] = 1;
        pascal[i][i] = 1 ;
        
        for(int j = 1 ; j<i ; j++){
            pascal[i][j] =  pascal[i-1][j-1] + pascal[i-1][j]  ;
        }
    }
    return pascal[rowIndex] ;
} 
 };