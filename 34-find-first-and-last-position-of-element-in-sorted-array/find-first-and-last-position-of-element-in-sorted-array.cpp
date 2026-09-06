class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int h=nums.size()-1; int l=0;
        int first=-1, last=-1;
        while(l<=h){
            int mid=l+ (h-l)/2;
            if (target==nums[mid]) {
                first=mid;
                h=mid-1;
            }
            else if (target<nums[mid]) h=mid-1;
            else l=mid+1;
        }
        h=nums.size()-1;  l=0;
        while(l<=h){
            int mid=l+ (h-l)/2;
            if (target==nums[mid]) {
                last=mid;
                l=mid+1;
            }
            else if (target<nums[mid]) h=mid-1;
            else l=mid+1;
        }
        
        return {first,last};
    }
};