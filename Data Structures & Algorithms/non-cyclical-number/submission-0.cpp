class Solution {
public:
    int squareadder(int n){
        int sum=0;
        while(n>0){
            int k=n%10;
            sum=sum+k*k;
            n=n/10;
        }
        return sum;
    }
    bool isHappy(int n) {
        if (n==1) return true;
        unordered_set<int> set;
        int num=n;
        while(true){
            num=squareadder(num);
            if(num==1) return true;
            if(set.find(num)!=set.end()) return false;
            set.insert(num);
        }
    }
};