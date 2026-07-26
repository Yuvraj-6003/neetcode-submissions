class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int ans = 0;
        set<int>s (nums.begin(),nums.end());

        for(int num : nums)
        {
            int streak =0,curr=num;

            while(s.find(curr)!=s.end()){
                streak++;
                curr++;

            }
            ans=max(ans,streak);
        }
        return ans;
    }
};
