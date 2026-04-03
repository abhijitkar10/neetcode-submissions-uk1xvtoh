class Solution {
public:
    int climbStairs(int n) {
        int prev2=1;
        int prev1=2;
        int sum;
        if (n==1) return prev2;
        if(n==2) return prev1;
        for(int i=3;i<=n;i++){
            sum=prev1+prev2;
            prev2=prev1;
            prev1=sum;
        }
        return sum;
    }
};