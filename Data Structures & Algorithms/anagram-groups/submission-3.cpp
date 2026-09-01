class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>>res;

        for(auto s : strs)
        {
           string a = s;
           sort(a.begin(),a.end());

            
            res[a].push_back(s);
        }

        vector<vector<string>> ans;

        for(auto i : res)
        {
            
             ans.push_back(i.second);
        }
        return ans;


    }
};
