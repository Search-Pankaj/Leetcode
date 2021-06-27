class Solution {
public:
    string reverseWords(string A) {
            string ans = "";
    string w ;
    stringstream ss(A);
    while(ss >> w){
        ans = " " + w + ans;
    }
    return (ans.substr(1));
    }
};