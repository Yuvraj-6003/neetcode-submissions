class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;

        for(auto i:nums){
            mp[i]++;
        }
        
        vector<vector<int>>freq(nums.size()+1);
        for(auto i:mp){
            freq[i.second].push_back(i.first);
        }
       
        
        vector<int>ans;
        for(int i=nums.size();i>=0;i--){
           for(auto n:freq[i])ans.push_back(n);

           if(ans.size()==k)return ans;
           
        }
        return ans;
    }
};
