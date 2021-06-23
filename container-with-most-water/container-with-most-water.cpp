class Solution {
public:
    int maxArea(vector<int>& height) {
        int start = 0 ;
        int end = height.size() -1 ;
        int maxvol = 0;
        while(start < end){
            maxvol = max(maxvol , (end - start) * min(height[start] ,height[end] )) ;
            if(height[start] < height[end]){
                start++ ;
            }
            else{
                end-- ;
            }
        }
        
        return maxvol ;
}
};