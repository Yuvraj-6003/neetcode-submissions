class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
         

         long long prd  =1 ;
         int cnt = 0;
         int index = 0;

         for(int i=0;i<n;i++)
         {  
            if(nums[i]!=0)
            prd *= nums[i];
            else {
                index=i;
                cnt++;
            }
         }

         if(cnt > 1){
            vector<int>ans(n,0);
            return ans;
         }
         if(cnt == 1)
         {
            vector<int>ans(n,0);
            ans[index]=prd;
            return ans;
         }

         vector<int>ans(n);

         for(int i=0;i<n;i++)
         {
            ans[i] = prd/nums[i];
         }
         return ans;

         

         
    }
}; 
