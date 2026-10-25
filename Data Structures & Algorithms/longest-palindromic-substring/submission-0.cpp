class Solution {
public:
    string longestPalindrome(string s) {
        string ans="";
        int n = s.size();
        for(int i =0;i<n;i++){
            int l =i;
            int r =i;
            while(l >= 0 && r < n && s[l]==s[r]){
                l--;
                r++;
            }
            if(ans.size()<r-l-1){
               ans= s.substr(l + 1, r - l - 1);
            } 
        }
        for(int i =0;i<n-1;i++){
            int l =i;
            int r =i+1;
            while(l >= 0 && r < n && s[l]==s[r]){
                l--;
                r++;
            }
            if(ans.size()<r-l-1){
                ans=s.substr(l + 1, r - l - 1);            } 
        }
        return ans;
    }
};
