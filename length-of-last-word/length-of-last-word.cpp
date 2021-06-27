class Solution {
public:
     int lengthOfLastWord(string str) {
         int end = str.length()-1;
        int count = 0;
         while(end>=0 && str[end] == ' '){
             end-- ;
         }
        while(end>=0 && str[end] != ' '  ){
            end-- ;
            count ++ ;
        }
        return count ;
    }
};