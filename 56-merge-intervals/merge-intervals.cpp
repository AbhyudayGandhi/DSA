class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> res; res.push_back(intervals[0]);
        for (auto i: intervals){
            if(res.back()[1] < i[0]) res.push_back(i);
            else res.back()[1]=max(res.back()[1],i[1]);
        }


        return res;
    }
    
};