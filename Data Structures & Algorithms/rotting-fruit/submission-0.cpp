class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<pair<int,int>,int>> q;
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> visited(n, vector<int>(m, 0));
        for ( int i =0;i<n;i++){
            for ( int j =0;j<m;j++){
                if(grid[i][j]==2){
                    visited[i][j]=2;
                    q.push({{i,j},0});
                }
                else{
                    visited[i][j]=0;
                }
            }
        }
        int rowm[] = {0,0,1,-1};
        int colm[] = {1,-1,0,0};
        int total =0 ;
        while(!q.empty()){
            int rw = q.front().first.first;
            int cl = q.front().first.second;
            int t = q.front().second;
            total=max(total,t);
            q.pop();
            for (int i =0;i<4;i++){
                int rn=rw+rowm[i];
                int cm=cl+colm[i];
                if(rn<0 || cm <0 || rn>=n || cm>=m || grid[rn][cm] == 0 || visited[rn][cm] == 2) continue;
                else{
                q.push({{rn,cm},t+1});
                grid[rn][cm]=2;
                visited[rn][cm]=2;
                }
            }

        }
        for ( int i =0;i<n;i++){
            for ( int j =0;j<m;j++){
                if(grid[i][j]==1){
                    return -1;
            }
        }
        }
        return total;
    }
};
