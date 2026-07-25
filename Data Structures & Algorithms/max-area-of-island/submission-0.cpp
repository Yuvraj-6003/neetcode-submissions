class Solution {
public:
int dfs(int i,int j,int n,int m,vector<vector<bool>>&vis,vector<vector<int>>& grid)
   {

        vis[i][j]=true;
        int area =1;

        int nx[] = {-1,0,1,0};
        int ny[] = {0,-1,0,1};
        
        for(int k=0;k<4;k++)
        {
            int x = i+nx[k];
            int y=  j+ny[k];

            if(x>=0 && x<n && y>=0 && y<m && !vis[x][y] && grid[x][y]==1)
            {   
                
                area+=dfs(x,y,n,m,vis,grid);
            }
        }

        return area;

   }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n =grid.size();
        int m = grid[0].size();

        vector<vector<bool>>vis(n,vector<bool>(m,false));
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int maxi=0;
                if(!vis[i][j] && grid[i][j]==1){
                   maxi=  dfs(i,j,n,m,vis,grid);
                    
                }
              
                ans=max(ans,maxi);
               
            }
        }
        return ans;
    }
};
