class Solution {
public:

    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>>v;
        for(int i=0;i<speed.size();i++)
        {
            v.push_back({position[i],speed[i]});

        }
        sort(v.begin(),v.end(),
        [](pair<int,int>p1,pair<int,int>p2)
        {
            return p1.first>p2.first;
        });
       double time=0;
        int ans=0;
        for(int i=0;i<v.size();i++)
        {
            pair<int,int>p=v[i];
            double t=(target-v[i].first)/(v[i].second*1.0);
            if(t>time)
            {
                ans++;
                time=t;
            }
        }
        return ans;
    }
};
