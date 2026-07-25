class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded = "";

        for(auto c:strs)
        {
            int n = c.size();
            encoded += to_string(n) + '#' + c;
        }
        return encoded;
    }

    vector<string> decode(string s) {
         vector<string>ans;

         int n = s.size();
         int i=0;
         while(i<n)
         {  int k = i;
            while(s[k]!='#')k++;
            int size = stoi(s.substr(i,k-i));
            i=k+1;
            string a="";
            ans.push_back(s.substr(i,size));
            i=i+size;

          
         }
         return ans;
    }
};
