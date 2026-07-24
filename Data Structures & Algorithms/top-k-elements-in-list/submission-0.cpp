class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        for(auto n : nums)
        {
            count[n]++;

        }

        vector<pair<int,int>>v;
        for(auto i:count){
            v.push_back({i.second,i.first});
        }

        sort(v.rbegin(),v.rend());

        vector<int>ans;
        for(int i=0;i<k;i++)ans.push_back(v[i].second);

        return ans;
    }
};
