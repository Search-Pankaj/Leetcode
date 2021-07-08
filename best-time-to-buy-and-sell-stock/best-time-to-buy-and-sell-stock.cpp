class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<int> right(n);
        int maxo = 0 ;
        for(int i = n -1 ; i >= 0 ;i--){
            maxo = max(maxo,prices[i]);
            right[i] = maxo ;
        }
        int ans = 0 ;
        for(int i = 0; i<n;i++){
            ans = max(ans,right[i] - prices[i]);
        }
        
        return ans ;
    }
};