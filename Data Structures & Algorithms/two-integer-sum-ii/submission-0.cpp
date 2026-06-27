class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        for(int i=0;i<n;i++)
        {
            int f=target-numbers[i];
            int low=0,high=n-1;
            while(low<=high)
            {
                int mid=low+(high-low)/2;
                if(numbers[mid]==f)
                    return {i+1,mid+1};
                if(numbers[mid]<f)
                    low=mid+1;
                else
                    high=mid-1;
            }
        }
        return{};
    }
};
