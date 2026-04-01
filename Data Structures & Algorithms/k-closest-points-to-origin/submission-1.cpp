class Solution {
public:
priority_queue<pair<int,pair<int,int>>> maxheap;
vector<vector<int>> ans;
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        for(auto &x:points) maxheap.push({x[0]*x[0] + x[1]*x[1], {x[0], x[1]}});
        while(maxheap.size()>k) maxheap.pop();
        for(int i=0;i<k;i++){
            ans.push_back({maxheap.top().second.first,maxheap.top().second.second});
            maxheap.pop();
        }
        return ans;
    }
};
