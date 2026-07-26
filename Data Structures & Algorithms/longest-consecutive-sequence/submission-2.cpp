class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>s(nums.begin(),nums.end());
        int ans=0;
        for(int num:nums)
        {
          if(s.find(num-1)==s.end()){
            int streak =0;
            while(s.find(num)!=s.end()){
                streak++;
                num++;
            }
            ans=max(ans,streak);
          }
            
        }

        return ans;
    }
};
