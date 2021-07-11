class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& B) {
        int A = B.size();
        int sum = 0;
    for(int i = 0; i < A; i++) sum += B[i];
    if(sum % 3 != 0 ) return 0;
    int sum13rd = sum/3;
    int sum23rd = 2 * sum13rd;
        bool a = false;
        bool b = false ;
        bool c = false ;
    int currSum = 0;
    int g13rd = 0;
    int count = 0;
    for(int i = 0; i < A ; i++) {
        currSum += B[i];
        if(currSum == sum and b) c = true;
        if(currSum == sum23rd and a) b = true;
        if(currSum == sum13rd) a = true;
    }
    //rumming till only A-1 is important for sum = 0. nd so is order of g13rd++.
    
        return (a and b and c);
    }
};