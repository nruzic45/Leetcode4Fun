class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s;

        //Unorderd set is implemented using hash table
        //Time complexity of find() is O(1)
        //Time complexity of insert() is O(1)
        //Time complexity of size() is O(1)
        //Time complexity of erase() is O(1)

        //s.find(nums[i]) != s.end(), find() returns end, 
        //if the key is not found

        for (int i=0; i<nums.size(); i++){
            if(s.find(nums[i]) != s.end()){
                return true;
            }
            s.insert(nums[i]);
        }

        return false;
    }
};