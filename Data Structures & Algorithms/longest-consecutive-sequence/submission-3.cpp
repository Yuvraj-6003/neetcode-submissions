class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>s(nums.begin(),nums.end());
        int ans=0;
        for(int num:nums)
        {
          if(s.find(num-1)==s.end()){
            int length =1;
            while(s.find(num+length)!=s.end()){
                length++;
            }
            ans=max(ans,length);
          }
            
        }

        return ans;
    }
};
