class Solution {
public:
     vector<int> plusOne(vector<int>& digi) {
        int size = digi.size()-1;
        while(size >= 0){
            if(digi[size] == 9){
                digi[size] = 0 ;
            }
            else{
                digi[size] = digi[size]+1 ;
                return digi ;
            }
            size-- ;
        }
        digi.insert(digi.begin(),1);
        return digi ;
    }
};