class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        int n = nums.size();

        unordered_map<int,int> m;

        for (int i=0; i<n; i++){
            m[nums[i]]++;
        }

        // bucket sort -> group all the values into buckets defined by the frequency
        // 0 index will correspond to the 0 number of

        vector<vector<int>> buckets(n+1);
        for(auto it = m.begin(); it!= m.end(); it++){
            buckets[it->second].push_back(it->first);
        }

        vector<int> result;

        for(int i=n; i>=0; i--){
            if(result.size() >= k){
                break;
            }
            if(!buckets[i].empty()){
                result.insert(result.end(), buckets[i].begin(), buckets[i].end());
            }
        }
        return result;

    }
};