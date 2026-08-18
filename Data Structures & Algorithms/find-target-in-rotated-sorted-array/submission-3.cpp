class Solution {
public:
    int search(vector<int>& nums, int target) {
        int h=nums.size()-1;
        int l=0;
       
        while(l<h)
        {
            int mid=l+(h-l)/2;
            if(nums[mid]>nums[h])
                l=mid+1;
            else 
                h=mid;
        }
       int result=binarys(nums,target,0,l-1);
        if(result==-1)
            return binarys(nums,target,l,nums.size()-1);
        return result;
       
    }
    int binarys(vector<int>& nums,int target,int low,int high)
    {
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(nums[mid]==target)
            return mid;
            else if (target>nums[mid])
                low=mid+1;
            else 
                high=mid-1;
        }
        return -1;
    }
};
