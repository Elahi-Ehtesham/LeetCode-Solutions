class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set <int>setn(nums.begin(),nums.end());
        int res=0;
        for(int num:setn)
        {
            if(setn.count(num-1)==0)
            {
                int length=1;
                while(setn.count(num+length))
                {
                    length++;
                }
                res=max(res,length);
            }
            else 
                continue;
        }
        return res;
    }
};
