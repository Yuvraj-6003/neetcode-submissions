class Solution {
public:
    bool checkInclusion(string s1, string s2) {
          map<char,int>mp1,mp2;

          for(auto c:s1)
          {
            mp1[c]++;
          }

          int k = s1.size();
          int l=0;
          int r=0;

          while(r<s2.size())
          {
              mp2[s2[r]]++;

              while((r-l+1)>s1.size())
              {
                if(mp1.find(s2[l])==mp1.end())mp2.erase(s2[l]);
                else mp2[s2[l]]--;
                l++;
              }

              if(mp1==mp2)return true;
              r++;
          }
          return false;
          
    }
};
