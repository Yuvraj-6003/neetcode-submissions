class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        map<char,vector<pair<int,int>>>mp1;
        int n = board.size();
        int m = board[0].size();
        vector<pair<int,int>>r = {{0,2},{3,5},{6,8}};
        vector<pair<int,int>>c = {{0,2},{3,5},{6,8}};

        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                map<char,int>mp;

                for(int k=r[i].first;k<=r[i].second;k++)
                {
                    for(int l=c[j].first;l<=c[j].second;l++)
                    {   if(board[k][l] == '.')continue;
                        if(mp.find(board[k][l])!=mp.end()){cout<<mp[board[k][l]]<<endl<<k<<endl << k ;return false;}
                        else {
                            mp[board[k][l]]++;
                            mp1[board[k][l]].push_back({k,l});
                        }
                    }
                }
            }
        }
       

        for(auto s : mp1)
        {     map<int,int>rows;
              map<int,int>cols;
            for(auto i : s.second)
            {
                if(rows.find(i.first)!=rows.end() || cols.find(i.second)!=cols.end())return false;
                else {
                    rows[i.first]++;
                    cols[i.second]++;
                }
            }
        }
        return true;
    }
};
