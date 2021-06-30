class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int>res(1,0);
        for(int i = 0 ; i<n ; i++){
            int curr = res.size();
            for(int j = curr -1 ; j>=0  ;j--){
                res.push_back(res[j] + (1<<i) );
            }
        }
        return res ;
    }
};