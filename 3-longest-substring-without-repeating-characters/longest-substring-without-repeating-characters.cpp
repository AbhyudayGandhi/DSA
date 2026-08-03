class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start=0; int longest=0;
        unordered_map<char,int> mp;
        for(int i=0;i<s.size();i++){
            if(mp.count(s[i])>0 && mp[s[i]]>=start){
                start=mp[s[i]]+1;
            }
            mp[s[i]]=i;
            longest=max(longest, i-start+1);
        }
        return longest;
    }
};