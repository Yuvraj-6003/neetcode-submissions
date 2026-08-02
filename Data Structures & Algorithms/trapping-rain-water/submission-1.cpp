class Solution {
public:
    int trap(vector<int>& height) {
        int n =height.size();
        int ans = 0;

       int maxl = height[0];
       int maxr = height[n-1];

       int l = 0 ;
       int r = n-1;

       while(l<r)
       {
         if(height[l]<height[r])
         {   
            
            if(height[l]>maxl)maxl=height[l];
            else ans+=(maxl-height[l]);
            
            l++;
         }else {
            if(height[r]>maxr)maxr=height[r];
            else ans+=(maxr-height[r]);
            r--;
         }
       }
       return ans;
    }
};
