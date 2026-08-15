class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1,high=*max_element(piles.begin(),piles.end());
        int res=high;
        while(l<=high)
        {
            int mid=(l+high)/2;
            int ans=0;
            for(int pile:piles)
            {
                ans=ans+(pile+mid-1)/mid;
            }
            if(ans<=h)
            {
                res=mid;
                high=mid-1;
            }
            else
            l=mid+1;
        }
        return res;
    }
};
