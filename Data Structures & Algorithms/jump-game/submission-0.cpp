class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size()-1;
        int sus=0;
        for (int i=n-1;i>=0;i--){
            if(nums[i]==0){
                sus++;
            }
            else{
                if(nums[i]>sus){
                    sus=0;
                }
                else{
                    sus++;
                }
            }
        }
    if(sus==0) return true;
    else return false;
    }
};