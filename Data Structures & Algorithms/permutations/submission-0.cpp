class Solution {
public:
    void dfs(vector<int> &nums,vector<int>&store,vector<vector<int>> &res,vector<bool>&v){
        if(store.size()==nums.size()){
            res.push_back(store);
            return;
        }
        for(int i =0 ;i<nums.size();i++){
            if(v[i]){
                continue;
            }
            store.push_back(nums[i]);
            v[i] = true;
            
            dfs(nums,store,res,v);
            store.pop_back();
            v[i]=false;
        }

    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> store;
        vector<bool> v(nums.size(),false);
        dfs(nums,store,res,v);
        return res;
    }
};
