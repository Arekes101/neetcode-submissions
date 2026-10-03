class Solution {
public:
vector<vector<int>> fans;
void dfs(vector<int>&nums, vector<int>&ans,int cur,int target,int idx){
    if(cur>target) {
        return ;
    }
    else if(cur==target){
        fans.push_back(ans);
        return ;
    }

    for ( int i =idx ;i<nums.size();i++){
        ans.push_back(nums[i]);
        cur+=nums[i];
        dfs(nums,ans,cur,target,i);
        ans.pop_back();
        cur-=nums[i];
    }
    return;
}
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int>ans;
        int cur =0;
        dfs(nums,ans,cur,target,0);
        return fans;
    }
};
