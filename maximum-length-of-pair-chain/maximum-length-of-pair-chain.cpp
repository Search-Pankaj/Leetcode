class Solution {
public:
    // rember to make it static 
  bool static sortcol( const vector<int>& v1,
               const vector<int>& v2 ) {
 return v1[0] < v2[0];
}
    int findLongestChain(vector<vector<int>>& arr) {
        
         ios_base::sync_with_stdio(false);
         cin.tie(NULL);
        // using the concept of LIS(longest common subsequence )
        int n = arr.size();
        sort(arr.begin(),arr.end(),sortcol);
        vector<int> mcl(n) ;
      /* Initialize MCL (max chain length) 
	values for all indexes */
	for ( int i = 0; i < n; i++ ) 
		mcl[i] = 1; 
	
	/* Compute optimized chain length values in bottom up manner */
	for (int  i = 1; i < n; i++ ) 
		for (int j = 0; j < i; j++ ) 
			if ( arr[i][0] > arr[j][1] && mcl[i] < mcl[j] + 1) 
				mcl[i] = mcl[j] + 1; 
	
	// mcl[i] now stores the maximum chain length ending with Pair i 
	int max = 0 ;
	/* Pick maximum of all MCL values */
	for (int i = 0; i < n; i++ ) 
		if ( max < mcl[i] ) 
			max = mcl[i]; 
	
	/* Free memory to avoid memory leak */
	
	return max; 
    }
};