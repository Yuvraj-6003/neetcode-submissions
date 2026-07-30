class Solution {
public:
    int maxArea(vector<int>& nums) {
        int ans=0;
        int i=0;
        int j= nums.size()-1;
        
        while(i<j)
        {
             if(nums[i]<nums[j])
             {
                int storage = nums[i] * (j-i);
                ans = max(ans,storage);
                i++;
             }
             else {
                int storage = nums[j] * (j-i);
                ans = max(ans,storage);
                j--;
             }
        }
        return ans;
    }
};
