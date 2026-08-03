class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> pre; int sum=0,count=0;
        pre[0]=1;

        for (int i : nums){
            sum+=i;
            if(pre.count(sum-k)) count+= pre[sum-k];
            pre[sum]++;
        }
        return count;
    }
};