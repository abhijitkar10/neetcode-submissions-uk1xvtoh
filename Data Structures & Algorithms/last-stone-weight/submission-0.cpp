class Solution {
public:
    priority_queue<int> maxheap;
    int lastStoneWeight(vector<int>& stones) {
        for(int x:stones) maxheap.push(x);
        while(maxheap.size()>1){
            int a=maxheap.top();
            maxheap.pop();
            int b=maxheap.top();
            maxheap.pop();
            maxheap.push(abs(a-b));
        }
        return maxheap.top();
    }
};
