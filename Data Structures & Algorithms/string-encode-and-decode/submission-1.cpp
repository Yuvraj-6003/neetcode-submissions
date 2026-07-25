class Solution {
public:
    vector<int>v;
    string encode(vector<string>& strs) {
        string encoded = "";

        for(auto c:strs)
        {
            int n = c.size();
            v.push_back(n);
            encoded +=  c;
        }
        return encoded;
    }

    vector<string> decode(string s) {
         vector<string>ans;

         int n = s.size();
         int i=0;
           for(auto k:v)
           {
            string a="" ;
            int j=i;
            while(j<k+i && j<n){
                a+=s[j];
                j++;
            }
            ans.push_back(a);
            i=j;
           }
          
         
         return ans;
    }
};
