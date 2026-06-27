class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       sort(nums.begin(),nums.end());
        vector<vector<int>>vec;
        map<int,int>count;

        for(int i=0;i<nums.size();i++)
        {
            count[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++)
        {
           count[nums[i]]--;
          
            if(i>0 && nums[i]==nums[i-1])
                continue;
            for(int j=i+1;j<nums.size();j++)
            {
                if(j>i+1 && nums[j]==nums[j-1])
                    continue;
                int target=-(nums[i]+nums[j]);
                count[nums[j]]--;
                if(count[target]>0 && target>=nums[j])
                {
                    vec.push_back({nums[i],nums[j],target});
                }
                count[nums[j]]++;
            }
           count[nums[i]]++;
        }
        return vec;
    }
};
