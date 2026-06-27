class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int>cc;
        for(int i=0;i<nums.size();i++)
        {
           cc.insert(nums[i]);
           
        }
        if(cc.size()==nums.size())
        return false;
        else 
        return true;
    }
};
