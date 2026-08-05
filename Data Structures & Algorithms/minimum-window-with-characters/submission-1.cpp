class Solution {
public:
    string minWindow(string s, string t) {
        if(t=="")return "";

        map<char,int>mpt,window;
        
        for(auto c:t)
        {
            mpt[c]++;
        }

        int have =0;
        int need=mpt.size();

        int l=0;
        string ans;
        int mini=INT_MAX;
        for(int i=0;i<s.length();i++)
        {
            window[s[i]]++;

            if(mpt.count(s[i]) && mpt[s[i]]==window[s[i]])have++;

            while(have == need)
            {
                if(mini>i-l+1)
                {
                    mini = i-l+1;
                    ans = s.substr(l,mini);
                }
                 window[s[l]]--;
                 if(mpt.count(s[l]) && mpt[s[l]]>window[s[l]])have--;
                
                l++;
            }
        }
        return ans;
    }
};
