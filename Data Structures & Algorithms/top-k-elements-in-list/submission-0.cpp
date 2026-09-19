class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        // 1. Frequency count
        unordered_map<int, int> mp;

        for (int num : nums) {
            mp[num]++;
        }

        // 2. Max heap
        priority_queue<pair<int, int>> pq;

        for (auto it : mp) {
            pq.push({it.second, it.first});
        }

        // 3. K most frequent elements
        vector<int> ans;

        while (k--) {
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
    }
};