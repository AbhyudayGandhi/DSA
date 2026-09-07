class Solution {
public:
    void reverseString(vector<char>& s) {
        char temp;
        int l=0 , h=s.size()-1;
        while(l<h){
            temp=s[l];
            s[l]=s[h];
            s[h]=temp;
            l++; h--;
        }
    }
};