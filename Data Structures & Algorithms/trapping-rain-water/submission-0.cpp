class Solution {
public:
    int trap(vector<int>& height) {
         int l=0,r=height.size()-1;
        int maxl=-1,maxr=-1;
        int ans=0;
        while(l<r)
        {
            maxl=max(maxl,height[l]);
            maxr=max(maxr,height[r]);

            if(maxl<maxr)
            {
                ans+=maxl-height[l];
                l++;
            }
            else 
            {
                ans+=maxr-height[r];
                r--;
            }
        }
        return ans;
    }
};
