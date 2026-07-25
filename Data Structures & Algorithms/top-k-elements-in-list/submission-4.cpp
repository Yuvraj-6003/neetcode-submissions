class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;

        for(auto i:nums){
            mp[i]++;
        }

        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>heap;
        for(auto i:mp){
            heap.push({i.second,i.first});
            if(heap.size()>k)heap.pop();
        }
       
        
        vector<int>ans;
        for(int i=0;i<k;i++){
           ans.push_back(heap.top().second);
           heap.pop();
        }
        return ans;
    }
};
