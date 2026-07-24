class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        int n=strs.size();
        vector<bool>v(n,false);

        for(int i=0;i<n;i++){
            if(v[i]==true)continue;

            v[i]=true;
            string a = strs[i];
            vector<string>s;
            s.push_back(a);

            for(int j=i+1;j<n;j++){
                string b = strs[j];
                if(a.size()!=b.size())continue;
                map<char,int>countA;
                map<char,int>countB;

                for(int k=0;k<a.size();k++){
                    countA[a[k]]++;
                    countB[b[k]]++;
                }

                if(countA==countB){
                    v[j]=true;
                    s.push_back(b);
                }

            }

           ans.push_back(s); 
        }
        return ans;
    }
};
