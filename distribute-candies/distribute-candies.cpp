class Solution {
public:
    int distributeCandies(vector<int>& candy) {
        unordered_set<int> value;
        for(int i:candy){
            value.insert(i);
        }
        int n = candy.size()/2 ;
        if(n > value.size()) return value.size();
        else return n ;
    }
};