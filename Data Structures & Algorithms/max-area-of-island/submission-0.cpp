class Solution {
public:
    int dfs(int i,int j,vector<vector<int>>& visited,vector<vector<int>>& grid){
        int n=grid.size(),m=grid[0].size();
        if(i<0 || i>n-1 || j<0 || j>m-1)return 0;
        if(visited[i][j] || !grid[i][j]) return 0;

        visited[i][j]=1;
        int area=1;
        area+=dfs(i,j-1,visited,grid);
        area+=dfs(i,j+1,visited,grid);
        area+=dfs(i-1,j,visited,grid);
        area+=dfs(i+1,j,visited,grid);
        return area;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        int maxarea=0;
        vector<vector<int>> visited(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!visited[i][j] && grid[i][j]){
                    maxarea=max(dfs(i,j,visited,grid),maxarea);
                }

            }
        }
        return maxarea;
    }
};
