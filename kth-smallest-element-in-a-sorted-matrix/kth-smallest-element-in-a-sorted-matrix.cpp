class Solution {
public:
    int kthSmallest(vector<vector<int>>& A, int k) {
        int row = A.size();
    int col = A[0].size();
    int min = INT_MAX ;
    int max = INT_MIN ;
    for(int i = 0  ; i<row ; i++){
        if(A[i][0] < min){
            min = A[i][0];
        }
        if(A[i][col-1] > max){
            max = A[i][col-1];
        }
    }
    int corr = k ;
    while(min<max){
        int mid = (min + max) / 2 ;
        int count = 0;
        for(int i = 0 ; i < row ; i++){
            count += upper_bound(A[i].begin(),A[i].end() , mid) - A[i].begin();
        }
        if(count< corr)
        { min = mid + 1 ;}
        else{
            max = mid ;
        }
    }
    return min ;
    }
};