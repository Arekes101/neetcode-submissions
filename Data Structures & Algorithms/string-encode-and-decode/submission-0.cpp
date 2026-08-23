class Solution {
public:

    string encode(vector<string>& strs) {
        string s = "";
        for(auto str : strs){
            s += str + '\0';
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        string e = "";
        for ( int i =0;i<s.length();i++){
            if(s[i]=='\0'){
                ans.push_back(e);
                e="";
            }
            else{
                 e+=s[i];
            }
        }
        return ans;
    }
};
