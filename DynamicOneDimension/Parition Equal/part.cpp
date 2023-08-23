class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int target = 0;

        // The sum of the larger array needs to be divisible with 2, one half is the target.
        for(int i=0;i<nums.size();i++){
            target += nums[i];
        }

        if(target%2!=0){
            return false;
        }

        target/=2;

        // Main set
        unordered_set<int> dp;

        dp.insert(0);


        for(int i=0;i<nums.size();i++){
            //helper set
            unordered_set<int> dp_next;
            for (auto it=dp.begin(); it!=dp.end(); it++){
                if(*it + nums[i] == target){
                    return true;
                }

                dp_next.insert(*it + nums[i]);
                dp_next.insert(*it);
            }
            dp = dp_next;

        }
        
        return false;
    }
};