class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>s(nums.begin(),nums.end());
        int ans=0;
        for(int num:nums)
        {
            int curr=num,streak=0;
            while(s.find(curr)!=s.end()){
                streak++;
                curr++;
            }
            ans=max(ans,streak);
        }

        return ans;
    }
};
