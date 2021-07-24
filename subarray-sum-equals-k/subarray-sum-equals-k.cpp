class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0 ;
        int sum = 0 ;
        unordered_map<int,int>map ;
        map[0]++ ;
        for(int i :nums){
            sum += i ;
            if(map[sum - k]){
                count += map[sum -k];
            }
            map[sum]++ ;
        }
        return count ;
    }
};