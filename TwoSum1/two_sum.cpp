class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();

        unordered_map<int,int> map;
        //value to index mapping

        for (int i=0; i<n; i++){
            int compliment = target - nums[i];
            if (map.find(compliment) != map.end()){
                //return the indicies of the two numbers
                return {map[compliment], i};
            }

        map.insert({nums[i],i});
        }

        return {};


    }
};