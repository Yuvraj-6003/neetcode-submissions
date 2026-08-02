class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int>mp;
        int i=0,j=0,ans=0;
        int n =s.size();

        while(j<n)
        {
                mp[s[j]]++;
               while(mp[s[j]]>1)
               {
                mp[s[i]]--;
                i++;
               }
                ans = max(ans, j - i + 1);
               j++;
           
        }
        ans=max(ans,j-i);
        return ans;

    }
};
