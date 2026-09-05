class Solution {
public:
    vector<int> nrow(int n){
        vector<int> row;
        row.push_back(1);
        long long ele=1;
        for(int i=1; i<n; i++){
            ele= ele * (n-i) / i;
            row.push_back(ele); 
        }
        return row;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> a;
        for(int i=1; i<=numRows; i++){
            a.push_back(nrow(i));
        }
        return a;
    }
};