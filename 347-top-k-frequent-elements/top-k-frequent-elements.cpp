bool comparator(pair<int,int> a, pair<int,int> b){
    return (b.second < a.second) ;
    
}
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        vector<int> ans;
        for(int i : nums){
            freq[i]++;
        }
        vector<pair<int, int>> v(freq.begin(), freq.end());
        sort(v.begin(),v.end(),comparator);
        for (int i=0;i<k;i++){
            ans.push_back(v[i].first);
        }
        return ans;
    }
};