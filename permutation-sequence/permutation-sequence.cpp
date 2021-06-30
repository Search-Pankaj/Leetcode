class Solution {
public:
    
    int factorial(int n) {
        if (n > 12) {
            // this overflows in int. So, its definitely greater than k
            return INT_MAX;
        }
        int fact = 1;
        for (int i = 2; i <= n; i++)
            fact *= i;
        return fact;
    }

string helper(vector<int> &set_nums, int B){
    if(set_nums.size()==0 || B>factorial(set_nums.size())) return "";
    int f = factorial(set_nums.size()-1);
    int pos = B/f;
    string ch = to_string(set_nums.at(pos));
    set_nums.erase(set_nums.begin()+pos);
    return ch + helper(set_nums, B%f);
}

string getPermutation(int A, int B) {
    vector<int> set_nums(A);
    iota(set_nums.begin(), set_nums.end(), 1);
    return helper(set_nums, B-1);
}

};