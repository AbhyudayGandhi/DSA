class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> h;
        for(int i : nums){
            if (h.count(i)) return true;
            else h.insert(i);
        }
        return false;
    }
};