class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
         vector<int>pre(n,1);

         pre[0]=nums[0];

         for(int i=1;i<n;i++)
         {
            pre[i] = pre[i-1] * nums[i];
         }

         int post = 1;

         for(int i =n-1;i>=1;i--)
         {
            pre[i] = pre[i-1]*post;
            post = post * nums[i];
         }

         pre[0]= post;

         return pre;

         
    }
}; 
