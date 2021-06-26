class Solution {
public:
    int mySqrt(int A) {
      int start = 1 ;
int end = A;
int ans = 0 ;
while(start <= end){
    int mid  =  start + ( end - start )/ 2;
    if(mid <= A/mid ){
        start = mid + 1;
        ans = mid;
    }
    else{
        end = mid - 1;
    }

}
return ans ;
    }
};