class Solution {
public:
    void sum(vector<int>& candidates, int remaining,vector<int>& temp,vector<vector<int>> &ans,int i){
        if(remaining < 0 || i >= candidates.size()){
            return;
        }
        if(remaining==0){
            ans.push_back(temp);
            return;
        }
        temp.push_back(candidates[i]);
        sum(candidates,remaining-candidates[i],temp,ans,i);
        temp.pop_back();
        sum(candidates,remaining,temp,ans,i+1);

    }
        
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n=candidates.size();
        vector<vector<int>> ans;
        vector<int> temp;
        sum(candidates,target,temp,ans,0);
        return ans;
    }
};