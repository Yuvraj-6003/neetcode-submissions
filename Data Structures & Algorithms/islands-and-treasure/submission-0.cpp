class Solution {
public:
    void islandsAndTreasure(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        queue<pair<int,int>>q;
        vector<vector<bool>>vis(n,vector<bool>(m,false));

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==0){
                    q.push({i,j});
                    vis[i][j]=true;
                }
            }
        }
        int nx[4] = {-1,0,1,0};
        int ny[4] = {0,-1,0,1};
        while(!q.empty()){
            int x = q.front().first;
            int y = q.front().second;
            int r = grid[x][y];
            q.pop();
            for(int i=0;i<4;i++)
            {
                int j = x+nx[i];
                int k= y+ny[i];

                while(j>=0 && j<n && k>=0 && k<m && !vis[j][k] && grid[j][k]==2147483647){
                    grid[j][k]=r+1;
                    vis[j][k]=true;
                    q.push({j,k});
                }
                
            }
        }
    }
};
