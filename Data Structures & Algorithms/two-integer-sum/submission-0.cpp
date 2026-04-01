class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int> hash;
        for(int i=0;i<n;i++){
            int missing=target-nums[i];
            if(hash.count(missing)) return {hash[missing],i};
            else hash[nums[i]]=i;
        }
        return {};
    }
};
