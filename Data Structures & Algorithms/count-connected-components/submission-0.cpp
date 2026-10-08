class Solution {
public:

    bool dfs(vector<vector<int>>& g,vector<int>& v,int i){
        if(!v[i]){
        queue<int> st;
        st.push(i);
        v[i]=true;
        while(!st.empty()){
            int k = st.front();
            st.pop();
            for ( int i=0;i<g[k].size();i++){
                int nd =g[k][i];
                if(!v[nd]){
                st.push(nd);
                v[nd]=true;
                }  
            }
        }
        return true;
        }
        return false;
    }
    int countComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>> g(n);
        for ( int i =0;i<edges.size();i++){
            g[edges[i][0]].push_back(edges[i][1]);
            g[edges[i][1]].push_back(edges[i][0]);
        }
        vector<int> v(g.size(),false);
        int count=0;
        for (int i =0;i<g.size();i++){
           if( dfs(g,v,i)){
            count++;

           }
        }
return count;
    }
};
