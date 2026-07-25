class Solution {
public:
   void dfs(int i,int j,int n,int m,vector<vector<bool>>&vis,vector<vector<char>>& grid)
   {

        vis[i][j]=true;

        int nx[] = {-1,0,1,0};
        int ny[] = {0,-1,0,1};
        
        for(int k=0;k<4;k++)
        {
            int x = i+nx[k];
            int y=  j+ny[k];

            if(x>=0 && x<n && y>=0 && y<m && !vis[x][y] && grid[x][y]=='1')
            {
                dfs(x,y,n,m,vis,grid);
            }
        }

   }
    int numIslands(vector<vector<char>>& grid) {
        int n =grid.size();
        int m = grid[0].size();

        vector<vector<bool>>vis(n,vector<bool>(m,false));
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && grid[i][j]=='1'){
                    dfs(i,j,n,m,vis,grid);
                    ans++;
                }
            }
        }
        return ans;
    }
};
