class Solution {
public:
    bool isPalindrome(string s) {
        for (int i=0,j=s.size()-1;i<=j;i++,j--){
            if (!isalnum(s[i])) {j++; continue;}
            if (!isalnum(s[j])) {i--; continue;}
            if (tolower(s[i])!=tolower(s[j])) return false;
        }
        return true;
    }
};
