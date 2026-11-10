class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())return false;
        vector<int> v(26,0);

        for(char c : s)
        {
            v[c - 'a']++;
        }
        for(char c : t)
        {
           v[c - 'a']--;
           if(v[c-'a'] == -1)return false;
        }

        return true;
    }
};
