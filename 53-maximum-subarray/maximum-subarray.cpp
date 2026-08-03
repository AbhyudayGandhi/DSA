class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum=nums[0], curr=nums[0];
        unordered_map<char,int> mp;
        for(int i=1;i<nums.size();i++){
            curr= max(nums[i], curr+nums[i]);
            maxsum= max(curr, maxsum);
        }
        return maxsum;
    }
};