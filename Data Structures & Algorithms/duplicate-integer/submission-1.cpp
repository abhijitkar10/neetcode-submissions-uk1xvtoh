class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n=nums.size();
        unordered_set <int> hash;
        
        for(int x: nums){
            if(hash.count(x)) return true;
            hash.insert(x);
        }
        return false;
    }
};