class Solution {
public:
    vector<vector<string>> ans;

    bool safe(vector<string> &board,int r,int c){
        for ( int j=r-1;j>=0;j--){
            if(board[j][c]=='Q')
            return false;
        }
        for (int i=r-1,j=c-1 ;i>=0 && j>=0;i--,j--){
            if(board[i][j]=='Q')
            return false;
        }
        for(int i=r-1,j=c+1;i>=0 && j<board[0].size();i--,j++){
            if(board[i][j]=='Q')
            return false;
        }
        return true;
        
    }

    void dfs(vector<string> &board,int n,int r){
        if(r==n){
            ans.push_back(board);
            return;
        }
        for ( int c =0;c<n;c++){
            if(safe(board,r,c)){
                board[r][c]='Q';
                dfs(board,n,r+1);
                board[r][c]='.';
            }
            
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n,string(n,'.'));
     dfs(board,n,0);
     return ans;   
    }
};
