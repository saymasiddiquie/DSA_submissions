class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        vector<pair<int,int>> ans;
        for(int i: nums){
            mp[i]++;
        }
        for(auto x: mp){
            ans.push_back({x.first,x.second});
        }
        sort(ans.begin(), ans.end(), [](auto a, auto b) {
            return a.second > b.second;
        });
        vector<int> v;
        for(int i=0;i<k;i++){
            v.push_back(ans[i].first);
        }
        return v;
    }
};
