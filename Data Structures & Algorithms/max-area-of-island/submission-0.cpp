class Solution {
public:
    int dir[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();

        int mx =0;
        int csum =0;
        for ( int i=0;i<row;i++){
            for ( int j=0;j<col;j++){
                if(grid[i][j]==1){
                    csum =0;
                    dfs(grid,i,j,csum);
                    mx=max(mx,csum);
                }
            }
        }
        return mx;
    }
    void dfs(vector<vector<int>>&grid,int r,int c,int &s){
        if( r<0 || c<0 || r>=grid.size() || c>=grid[0].size() || grid[r][c]==0){
            return;
        }
        grid[r][c]=0;
        s++;
        for ( int i =0;i<4;i++){
            dfs(grid,r+dir[i][0],c+dir[i][1],s);
        }
    }
};
