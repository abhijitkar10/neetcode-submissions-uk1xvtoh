class Solution {
public:
    int bs(vector<int>& nums, int target,int low,int high){
        int mid=(low+high)/2;
        while(low<=high){
            if(nums[mid]==target) return mid;
            else if(target<nums[mid]) return bs(nums,target,low,mid-1);
            else if(target>nums[mid]) return bs(nums,target,mid+1,high);
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        return bs(nums,target,0,nums.size()-1);
    }
};