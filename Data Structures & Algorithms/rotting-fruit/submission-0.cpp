class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>> q;
        int n=grid.size();
        int m=grid[0].size();
        int fresh=0;
        int minute=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    fresh++;
                }
                else if(grid[i][j]==2){
                    q.push({i,j});
                }
            }
        }
        while(!q.empty() && fresh>0){
            int size=q.size();
            for(int s=0;s<size;s++){
                pair<int,int> p=q.front();
                int x=p.first;
                int y=p.second;
                q.pop();

                vector<int> dx={1,-1,0,0};
                vector<int> dy={0,0,1,-1};

                for(int k=0;k<4;k++){
                    int nx=x+dx[k];
                    int ny=y+dy[k];
                    if( nx>=0 && nx<n && ny>=0 && ny<m && grid[nx][ny]==1){
                        grid[nx][ny]=2;
                        fresh--;
                        q.push({nx,ny});
                    }
                }
            }
            minute++;
        }
        return (fresh) ? -1 : minute;
    }
};
