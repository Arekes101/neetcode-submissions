class Solution {
public:
   void dfs(vector<string> &res, string& st,int f,int b,int n){
    if(f==b && f==n){
        res.push_back(st);
        return;
    }
    if(f<n){
        st+='(';
        dfs(res,st,f+1,b,n);
        st.pop_back();
    }
    if(b<f){
        st+=')';
        dfs(res,st,f,b+1,n);
        st.pop_back();
    }
   }

    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string st;
        dfs(res,st,0,0,n);
        return res;
    }
};
