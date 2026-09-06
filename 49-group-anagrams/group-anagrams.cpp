class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> match;
        for (auto x: strs){
            string temp=x;
            sort(x.begin(),x.end());
            match[x].push_back(temp);
        } 
        for(auto y: match){
            ans.push_back(y.second);
        }
        return ans;
    }
};