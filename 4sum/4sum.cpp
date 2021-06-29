class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& A, int B) {
       set<vector<int>> s;
  sort(A.begin(),A.end());
  int n = A.size();
    for(int i=0;i<n-3;i++)
    { 
        for(int j=i+1;j<n-2;j++)
        {  int sum = 0;
            int tar = B - A[i] - A[j] ;
            int l = j+1;
            int r = n-1;
            while(l<r){
                sum = A[l] +A[r] ;
                if(sum == tar){
                    s.insert({A[i],A[j],A[l++],A[r--]});
                }
                else if(sum < tar) l++;
                else r-- ;
            }   
            
        }
    }
        return vector<vector<int> >(s.begin(),s.end()); 
    }
};