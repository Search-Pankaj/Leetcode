class Solution {
public:
    static bool compare( vector<int>&  A,  vector<int>&  B){
     return A[0] < B[0] ;
 }
    vector<vector<int>> merge(vector<vector<int>>& A) {
            int first = 0;
    sort(A.begin(),A.end(),compare);
    for(int sec = 1 ; sec<A.size() ;sec++){
        if( A[first][1] >= A[sec][0] ){
            A[first][1] = max (A[first][1],A[sec][1]);
        }
        else{
            first++;
            A[first][1] = A[sec][1] ;
            A[first][0] = A[sec][0] ;
        }
    }
    
    A.erase(A.begin()+first+1,A.end());
    return A;
    }
};