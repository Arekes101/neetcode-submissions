class Solution {
public:
    bool isPalindrome(string s) {
        string ans ="";
        for (char c:s){
            c=tolower(c);
            if(isalnum(c) ){
                ans+=c;
            }
        }
        string rev =ans;
        cout<<rev << " "<<ans;
        reverse(rev.begin(),rev.end());
        return rev==ans;
    }
};
