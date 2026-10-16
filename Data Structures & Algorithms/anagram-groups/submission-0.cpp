class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> mp;
        for(string s :strs){
            string s1 =s;
            sort(s1.begin(),s1.end());
                mp[s1].push_back(s);
            
        }
        vector<vector<string>> ans;
        for(auto a:mp){
            ans.push_back(a.second);
        }
        return ans ;
    }
};
