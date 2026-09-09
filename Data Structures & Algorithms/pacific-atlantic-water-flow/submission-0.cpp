class Solution {
public:
int ROWS;
int COLS;
int rd[4] = {0,0,1,-1};
int cd[4] = {1,-1,0,0};
    bool canflow(vector<vector<int>>&h,int r,int c){
        queue<pair<int,int>> q;
        q.push({r,c});
        bool pac=false;
        bool atl=false;
        vector<vector<bool>> visited(ROWS, vector<bool>(COLS, false));
        while(!q.empty()){
            int n=q.front().first;
            int m=q.front().second;
            q.pop();
            int p = h[n][m];
            for ( int i =0;i<4;i++){
                int w =n+rd[i];
                int z=m+cd[i];
                if ( w<0 || z<0) pac = true;
                else if ( w>=ROWS || z>=COLS) atl = true;
                else if(h[w][z]<=p  && !visited[w][z]){
                    q.push({w,z});
                    visited[w][z] = true;
                }
                
            }
        }
        return pac && atl;

    }

    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        ROWS = heights.size();
        COLS = heights[0].size();
        vector<vector<int>> ans;
        for ( int i =0;i<ROWS;i++){
            for (int j=0;j<COLS;j++){
                if(canflow(heights,i,j)){
                    ans.push_back({i,j});
                }
            }
        }
        return ans;
    }
};
 