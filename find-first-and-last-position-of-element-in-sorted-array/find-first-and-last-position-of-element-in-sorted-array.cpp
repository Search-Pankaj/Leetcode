class Solution {
public:
    
    int index (vector<int>& nums, int target ,bool get){
        int ans = -1;
        int start = 0;
        int end = nums.size()-1;
       
        while (start<=end)
        {  int mid = (start + end)/2;
            if (nums[mid]==target)
            {
                ans = mid;
                if(get){
                    end=mid-1;
                }
                else
                {
                    start=mid+1;
                }
                
            }
            else if(nums[mid]<target){
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
            
            
        }
        return ans;
    } 
    
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> A(2,-1);
        int first = index(nums,target,true);
        if (first==-1)
        {
            return A;
        }
        int last= index(nums,target,0);
        A[0] = first;
        A[1] = last;
        return A;
    }
};