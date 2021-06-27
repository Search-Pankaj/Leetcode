class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int n= A.size();
  vector<int> prefix(n);
  vector<int > suffix(n);
  
  prefix[0]= A[0];

  for(int i=1;i<A.size();i++){
      prefix[i]= max(prefix[i-1], A[i]);
  }
  suffix[n-1]= A[n-1];
  for(int i= n-2;i>=0;i--){
      suffix[i]= max(suffix[i+1], A[i]);
  }
    
  for(int i=1;i<=n-2;i++){
      if(prefix[i-1]<A[i] && A[i]>suffix[i+1]){
          return i;
      }
  }
    return 0;
    }
};