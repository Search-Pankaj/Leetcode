class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        nums1.insert(nums1.end(),nums2.begin(),nums2.end());
        sort(nums1.begin(),nums1.end());        
        int size = nums1.size();
        int mean;
        float median;
        if(size%2 != 0){

            median = nums1[(size/2)];
        }
        else{
            //
            median =   (nums1[(size-1)/2] + nums1[(size+1)/2])/2.0  ;            
        }        
        return median;
    }
};