class Solution {
public:
    void solve(int i,int n,vector<int> &temp,vector<vector<int>> &ans,vector<int>& nums){
        if(i==n){
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[i]);
        solve(i+1,n,temp,ans,nums);
        temp.pop_back();
        solve(i+1,n,temp,ans,nums);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> ans;
        vector<int> temp;
        solve(0,n,temp,ans,nums);
        return ans;
    }
};