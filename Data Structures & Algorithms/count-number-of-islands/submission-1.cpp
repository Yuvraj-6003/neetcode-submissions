class Solution {
public:
   void bfs(int i,int j,int n,int m,vector<vector<bool>>&vis,vector<vector<char>>& grid)
   {
        queue<pair<int,int>>q;
        q.push({i,j});
        vis[i][j]=true;

        int nx[] = {-1,0,1,0};
        int ny[] = {0,-1,0,1};
        while(!q.empty()){
          auto temp=q.front();
          int i1 = temp.first;
          int j1 = temp.second;
          q.pop();
          for(int k=0;k<4;k++)
        {
            int x = i1+nx[k];
            int y=  j1+ny[k];

            if(x>=0 && x<n && y>=0 && y<m && !vis[x][y] && grid[x][y]=='1')
            {
                q.push({x,y});
                vis[x][y]=true;
            }
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
                    bfs(i,j,n,m,vis,grid);
                    ans++;
                }
            }
        }
        return ans;
    }
};
