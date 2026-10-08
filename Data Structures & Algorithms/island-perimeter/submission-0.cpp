class Solution {
public:
int per=0;
int rw[4]={-1,1,0,0};
int cl[4]={0,0,1,-1};
void dfs(vector<vector<int>>&grid,int r,int c,vector<vector<int>> &v){
    if(r < 0 || c < 0 || r >= grid.size() || c >= grid[0].size() || grid[r][c] == 0){
        per++;
        return ;
    }
    else if(v[r][c]==true){
        return;
    }
        v[r][c]=true;
    
    for (int i=0;i<4;i++){
        dfs(grid,r + rw[i],c + cl[i],v);
    }
}
    int islandPerimeter(vector<vector<int>>& grid) {
        vector<vector<int>> v(grid.size(),vector<int> (grid[0].size(),false));
        for (int i =0;i<grid.size();i++){
            for ( int j=0;j<grid[0].size();j++){
                if (grid[i][j] == 1 && !v[i][j]) {
            dfs(grid, i, j, v);
        }
            }
        }
        return per;
    }
};